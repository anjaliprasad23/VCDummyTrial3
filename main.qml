import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("V1.1.17")

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1 {
        }

        Page {
            Label {
                text: qsTr("Second page")
                anchors.centerIn: parent
            }
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("First")
        }
        TabButton {
            text: qsTr("Second")
        }
        TabButton {
            text: qsTr("Dummy button1")
        }
        TabButton {
            text: qsTr("Dummy button2")
        }
        TabButton {
            text: qsTr("Dummy button3")
        }
        TabButton {
            text: qsTr("Dummy button4")
        }
        TabButton {
            text: qsTr("Dummy button5")
        }
        TabButton {
            text: qsTr("Dummy button6")
        }
        TabButton {
            text: qsTr("Dummy button7")
        }
        TabButton {
            text: qsTr("Dummy button8")
        }
        TabButton {
            text: qsTr("Dummy button9")
        }
        TabButton {
            text: qsTr("Dummy button10")
        }
        TabButton {
            text: qsTr("Dummy button11")
        }
        TabButton {
            text: qsTr("Dummy button12")
        }
        TabButton {
            text: qsTr("Dummy button13")
        }
        TabButton {
            text: qsTr("Dummy button14")
        }
        TabButton {
            text: qsTr("Dummy button15")
        }
        TabButton {
            text: qsTr("Dummy button16")
       }
        TabButton {
            text: qsTr("Dummy button17")
        }
    }
}
