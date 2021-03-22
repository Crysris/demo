import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

import "widget"

Window {
    visible: true
    width: 2622
    height: 814
    title: qsTr("Hello World")

    Rectangle {
        x: 0
        width: 250
        height: 814
        color: gray

        SiImageButton{

        }


        /*
        Button {
            y: 203.5
            text: '录制'
            style: ButtonStyle {
            }

            anchors.centerIn: parent
            checkable: checked
            onClicked: {
                Qt.quit()
            }
        }

        Button {
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 140
                    implicitHeight: 140
                    color: gray
                    radius: 4
                    border.color: (Control.hovered
                                   || Control.pressed) ? blue : gray
                }
            }
            y: 610.5
            text: '设置'
            anchors.centerIn: parent
            checkable: checked
            onClicked: {
                Qt.quit()
            }
        }
          */
        Rectangle {
            x: 250
            width: 2372
            height: 814
            //color: "#00B000"
            color: "steelblue"
        }
    }
}
