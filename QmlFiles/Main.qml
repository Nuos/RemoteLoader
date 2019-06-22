import QtQuick 2.12
import QtQuick.Controls 2.12
import "."
Rectangle {
    width: 400
    height: 300
    color: "red"
    Circle {
        anchors.centerIn: parent
    }
    Circle {
        color: "green"
    }
}