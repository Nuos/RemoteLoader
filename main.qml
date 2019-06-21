import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
Window {
    id: root
    visible: true
    width: 640
    height: 480
    title: qsTr("RemoteLoader")
    Row {
        height: 40
        width: parent.width
        TextField {
            id: input
            width: parent.width - 40
            text: "http://192.168.0.107:8080/main.qml"
        }
        Button {
            height: 40
            width: 40
            text: "go"
            onClicked: {
                engine.clearCache();
                loader.source = ""
                loader.source = input.text
            }
        }
    }
    Loader {
        id: loader
        y: 40
        width: parent.width
        height: parent.height
    }
}
