import QtQuick 2.0

SiMouseArea {
    id: baseBtn
    property string fcolor: "white"
    property int fweight: Font.Normal
    property int fsize: 25
    property string textname: "baseBtnImag.height"
    property bool bFocus: false
    property string iconSource: ""
    property string text: ""
    property alias asynchronous: baseBtnImag.asynchronous
    Image {
        id: baseBtnImag
        //asynchronous: true
        source: baseBtn.iconSource
        fillMode: Image.PreserveAspectFit
        onStatusChanged: {
            //根据当前情况，按钮自动适配为图片大小
            if (status == Image.Ready) {
                baseBtn.height = sourceSize.height
                baseBtn.width = sourceSize.width
            }
        }
    }
}
//import QtQuick.Controls 1.4
//import QtQuick.Controls.Styles 1.4
//Button {
//	id:baseBtn
//	property string fcolor:"white"
//	property int fweight:Font.Normal
//	property int fsize:25
//	property string textname: "baseBtnImag.height"
//	property bool bFocus: false
//	style: ButtonStyle {
//		background: Image {
//			id:baseBtnImag
//			asynchronous: true
//			source: baseBtn.iconSource
//			fillMode: Image.PreserveAspectFit
//			onStatusChanged:{
//				//根据当前情况，按钮自动适配为图片大小
//				if (status == Image.Ready){
//					 baseBtn.height=sourceSize.height
//					 baseBtn.width=sourceSize.width
//				}
//			}
//			Text {
//				id:text
//				color: baseBtn.fcolor
//				anchors.centerIn: parent
//				text: baseBtn.text
//				font.pixelSize: baseBtn.fsize
//				font.weight: baseBtn.fweight
//			}
//		}
//		label: Item{}
//	}
//}

