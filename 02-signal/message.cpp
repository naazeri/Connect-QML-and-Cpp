#include "message.h"

Message::Message(QObject *parent) :
	QObject(parent),
	my_str("msg from C++")
{
}

Message::~Message()
{
}

void Message::showMessage()
{
	emit changeMessage(my_str);
}
