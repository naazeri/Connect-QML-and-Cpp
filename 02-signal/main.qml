import QtQuick 2.4
import QtQuick.Controls 1.3

ApplicationWindow {

	title: qsTr("Hello World")
	width: 640
	height: 480
	visible: true

	Connections {

		target: messageClass
		onChangeMessage:  myText.text = yourText;
	}

	Column {

		anchors.centerIn: parent
		spacing: 20

		Button {
			id: myBtn
			text: "Click Me"
			width: 100
			height: 50
			onClicked: messageClass.showMessage()
		}

		Label {
			id: myText
			anchors.horizontalCenter: myBtn.horizontalCenter
			text: "text";
		}
	}


}
