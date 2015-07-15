#include "message.h"
#include <QMessageBox>

Message::Message(QObject *parent) :
	QObject(parent)
{
}

Message::~Message()
{
}

void Message::showMessage()
{
	QMessageBox *my_msg = new QMessageBox();

	my_msg->setWindowTitle("just for test");
	my_msg->setText("we are in c++");
	my_msg->show();

}
