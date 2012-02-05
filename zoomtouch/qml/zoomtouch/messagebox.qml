import QtQuick 1.0

Component {
    id : messageComponents

    Rectangle {
        id: zoomTouchMessageBox
        opacity: 0
        anchors.centerIn: parent
        width: parent.width ; height: parent.height/5
        border.color: 'black'
        color: 'lightsteelblue'
        z: 65535 //Arbitrary number chosen to be above all the items, including the scaled perspective ones.

        function show(str){
            dialogText.text = str;
            dialogAnim.start();
        }

        Text {
            id: dialogText
            anchors.centerIn: parent
            font.pixelSize: 32
        }

        SequentialAnimation {
            id: dialogAnim
            NumberAnimation { target: dialog; property:"opacity"; to: 1; duration: 1000 }
            PauseAnimation { duration: 5000 }
            NumberAnimation { target: dialog; property:"opacity"; to: 0; duration: 1000 }
        }
    }


    Rectangle {
        id: zoomTouchMessageBoxInputBox
        property QString inputText : "http://nfc.get2q.com/reply.php"
        property QString text : "Enter input value"

        opacity: 0
        anchors.centerIn: parent
        width: parent.width ; height: parent.height/5
        border.color: 'black'
        color: 'lightsteelblue'
        z: 65535 //Arbitrary number chosen to be above all the items, including the scaled perspective ones.

        function show(str){
            dialogText.text = str;
            dialogTextBox.text = inputText;
            dialogAnim.start();
        }

        TextInput  {
            id: dialogTextBox
            anchors.centerIn: parent
            font.pixelSize: 32
        }

        SequentialAnimation {
            id: dialogAnim
            NumberAnimation { target: dialog; property:"opacity"; to: 1; duration: 1000 }
            PauseAnimation { duration: 5000 }
            NumberAnimation { target: dialog; property:"opacity"; to: 0; duration: 1000 }
        }
    }
}
