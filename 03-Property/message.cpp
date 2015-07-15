#include "message.h"
#include <QDebug>

Message::Message(QObject *parent) : QObject(parent)
{
	this->myText = "This text set from C++ constructor";
}

Message::~Message()
{

}

QString Message::text()
{
	return myText;
}

/* Slots */
void Message::sendText(QString text)
{
	setText(text);
}

/* Property */
void Message::setText(QString text)
{
	this->myText = "سلام " + text;
	emit textChanged();
}
