import QtQuick 2.0

MultiPointTouchArea{
	mouseEnabled: true
	maximumTouchPoints: 1
	touchPoints: [ TouchPoint { id: point1 } ]
	property real mouseX: point1.x
	property real mouseY: point1.y
	property bool pressed:false
	property bool beepClose:false
	signal clicked()

	onVisibleChanged:{
		if(!visible)
			pressed = false
	}

	onEnabledChanged: {
		if(!enabled)
			pressed = false
	}

	onReleased: {
		pressed = false;
		if(contains(Qt.point(mouseX, mouseY)))
			clicked()
	}

	onPressed: {
		pressed = true;
	}

	onClicked: {
		if(!beepClose)
			gAvmMainViewInst.onclickBtnBeep(1);
	}
}
