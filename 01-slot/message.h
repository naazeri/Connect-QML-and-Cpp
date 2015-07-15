#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>

class Message : public QObject
{
	Q_OBJECT
public:
	explicit Message(QObject *parent = 0);
	~Message();

public slots:
	void showMessage();
};

#endif // MESSAGE_H
