/****************************************************************************
**
****************************************************************************************/

import QtQuick 1.1
//import com.nokia.meego 1.0
import com.nokia.symbian 1.1

/*!
 * @brief Display the Header in the main page
 */
Image {
    id: headerholder

    property string text : ""

    height: parent.width < parent.height ? 72 : 46
    width: parent.width
    //source: "image://theme/meegotouch-view-header-fixed" + (theme.inverted ? "-inverted" : "")
    x: 0; y: 0; z: 1

    //! Header container
    Item {
        anchors.fill: parent
        anchors.topMargin: parent.width < parent.height ? 20 : 16
        anchors.bottomMargin: parent.width < parent.height ? 20 : 14
        anchors.rightMargin: 16
        anchors.leftMargin: 16

        //! Page header text
        Image {
            id: name
            anchors {
                verticalCenter: parent.verticalCenter
            }
            anchors.leftMargin: 10
            height: 70
            width:70
            source: "nfc.png"
        }
        Label {
            id: header
            anchors {
                verticalCenter: parent.verticalCenter                
                left:name.right
            }
            font {
                family: "Nokia Pure Text"
                weight: Font.Light
                pixelSize: 32
            }

            text: headerholder.text
            color: "#ffffff"
        }


    }
}

//! End of file
