/****************************************************************************
**

****************************************************************************************/

import QtQuick 1.1
import QtMobility.connectivity 1.2
import QtMobility.sensors 1.2
import QtMobility.systeminfo 1.2
import QtMobility.feedback 1.1
import QtMultimediaKit 1.1
import Nfc 1.0
import NW 1.0
import ParseXML 1.0

/* Enable this for *meego */
//import com.nokia.meego 1.0
//import com.nokia.extras 1.0

/* Enable this for *symbian */
import com.nokia.symbian 1.1

Page{
    id:mainUIPage
    orientationLock: PageOrientation.LockPortrait

    PageHeader{
        id: header
        anchors{top: parent.top;left:parent.left;right: parent.right}
        text: "ZoomTouch"
    }


    Rectangle {
        id:background
        anchors.fill: parent
        color: "black"

        Item{
            anchors.bottom: parent.bottom
            width: parent.width
            height: 100

            Row{
                anchors{    bottom: parent.bottom;bottomMargin: 25;horizontalCenter: parent.horizontalCenter }
                spacing: 30

                Image{
                    id:call
                    source:"telephone.png"                    
                    MouseArea{
                        anchors.fill: parent
                        onClicked:
                        {
                            // TODO : Implement
                        }

                    }
                }

                Image{
                    id:msg                    
                    source:"web.png"
                    MouseArea{
                        anchors.fill: parent
                        onClicked:
                        {
                            // TODO : Implement
                        }
                    }
                }

                Image{
                    id:buy
                    source:"buy.png"
                    MouseArea{
                        anchors.fill: parent
                        onClicked:
                        {
                            // TODO : Implement
                        }
                    }                    
                }

                Image{
                    id:write
                    width: 64
                    height: 64
                    source:"write.png"
                    MouseArea{
                        anchors.fill: parent
                        onClicked:
                        {
                            /* Enable this NFC writing */
                            var dlg = Qt.createQmlObject("dialog.qml");
                            dlg.zoomTouchMessageBoxInputBox.show("Enter");
                        }

                    }
                }

            }
        }

        Item {
            anchors.fill: parent
            anchors.topMargin: 160
            anchors.rightMargin: 2
            anchors.leftMargin: 2


            Text {
                id: infoText
                anchors { left: parent.left; top: parent.top; right: parent.right; }

                font.pixelSize: 28; font.bold: true; color: "lightcoral"
                style: Text.Outline; styleColor: "black"
                wrapMode: Text.Wrap
            }

            Text {
                id: name
                anchors { left: parent.left; top: infoText.bottom ; right: parent.right;}
                font.pixelSize: 28; font.bold: true; color: "lightcoral"
                style: Text.Outline; styleColor: "Green"
                wrapMode: Text.Wrap
                text:parsexml.info
            }
        }



        //   ! Timer to show error screen in case of an error
        //   ! Timer running for 2sec.
        Timer {
            id:animatetimer
            interval: 2000
            repeat: false
            triggeredOnStart: false
            onTriggered:{
                showpageelements.running = true;
                hideanimation.running = true;
            }
        }


        //! Interface for NdefManager Implementation
        Zoomtouch {
            id: sendvCard
            function initNfc()
            {
                sendvCard.initAndStartNfc();
            }
            Component.onCompleted: initNfc()

            onNfcReadTagUri:
            {
                console.log( "Tag uri read");
                infoText.text = nfcTagUri ;
                name.text = "Fetching content..";
                networkaccess.setUrl(nfcTagUri);
            }
            onNfcReadTagText:
            {
                infoText.text = nfcTagText + "\n" + nfcTagTitle;
            }
            onNfcReadTagSp:
            {
                console.log( "Tag sp read");
                infoText.text = nfcTagUri ;
                name.text = "Fetching content..";
                networkaccess.setUrl(nfcTagUri);
            }
            onNfcReadTagVcard:
            {
                infoText.text = nfcTagName + "\n" + nfcTagEmail + "\n" + nfcTagPhone;
            }
            onNfcReadTagAutostart:
                infoText.text = nfcTagPayload;
            onNfcReadTagUnknown:
                infoText.text = nfcTagType + "\nPayload:\n" + nfcTagPayload;


            //! Display the status of the NFC detection and write events

            //! In an event of error reading message from NFC tag
            onNfcReadTagError:{
                visibleanimation.running = true;
                hidepageelements.running = true;
                animatetimer.start();
                infobanner.text = nfcTagError;
                infobanner.timerShowTime = 10000;
                infobanner.show();
                audiofeedback.source = "media/error.wav";
                //! plays a rumble effect
                rumbleEffect.start();
                audiofeedback.play();
            }

            //! In an event of error during reading or writing messages to NFC tag
            onNfcStatusError:{
                console.log("\n on onNfcStatusError:");
                infobanner.text = nfcStatusErrorText;
                infobanner.timerShowTime = 10000;
                infobanner.show();
                audiofeedback.source = "media/error.wav";
                audiofeedback.play();
                //! Plays a rumble effect
                rumbleEffect.start();
            }

            //! In an event of status of NearFieldManager changes.
            onNfcStatusUpdate:{
                console.log("\n on onNfcStatusUpdate:");
                infobanner.text = nfcStatusText;
                infobanner.timerShowTime = 5000;
                infobanner.show();
                console.log("StatusUpdate:" + nfcStatusText);
                audiofeedback.source = "media/beep.wav";
                audiofeedback.play();
            }
        }

        //! Interface for  NetworkAccessManager Implementation
        NetworkAccessManager{
            id:networkaccess
            onContentReady:{
                console.log("\n contentReady");
                parsexml.setContent(content);
            }
        }

        //! Interface for  Parser Implementation
        Parser{
            id:parsexml
        }


        //! QML element to cause rumble effect.
        HapticsEffect {
            id: rumbleEffect
            attackIntensity: 0.5
            attackTime: 250
            intensity: 1.0
            duration: 100
            fadeTime: 250
            fadeIntensity:0.0
        }

        //! Using QML audio element to play file
        Audio {
            id: audiofeedback
            volume: 1.0
            onStopped: source = ""
        }

        //! Check if the version is PR 1.0 or PR 1.1
        function checkOSversion(stringValue) {
            console.log("\nFirmware version:" + stringValue);
            if(stringValue.indexOf("DFL61_HARMATTAN_1") == -1)
                //! Not PR 1.0
                return false;
            else
                //! PR 1.0
                return true;
        }

        //! Create GeneralInfo element
        GeneralInfo {
            id: generalInfo
        }

        //! Create DeviceInfo element
        DeviceInfo {
            id: deviceInfo
        }


        //! Information Banners to convey alerts and information to user
        /*
        InfoBanner {
            id: infobanner
            anchors.top: parent.top
            anchors.topMargin: 100
            timerEnabled:true;
        }
*/


    }
}

//! End of File
