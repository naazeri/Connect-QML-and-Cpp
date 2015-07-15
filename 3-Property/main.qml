import QtQuick 2.4
import QtQuick.Controls 1.3

ApplicationWindow {
	title: "Property"
    width: 640
    height: 480
    visible: true

	Column {
		anchors.centerIn: parent

		TextField {
			id: input
			width: 150
			height: 25
			placeholderText: "متن خود را وارد کنید"
		}

		Button {
			id: btn
			width: 150
			height: 40
			text: "Button"
/* ba click roye in dokme slot "sendText" ejra mishe
 va matni ke karbar vared karde ro baraye slot mifrestim*/
			onClicked: MessageClass.sendText(input.text)
		}

		Text {
			id: txt
			text: MessageClass.text
		}
	}
}
