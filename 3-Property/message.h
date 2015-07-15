#pragma once
#include <QObject>
#include <QString>

class Message : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)

public:
	explicit Message(QObject *parent = 0);
	~Message();

	QString text();
	void setText(QString text);

private:
	QString myText;	// save property data in this variable

signals:
	void textChanged();

public slots:
	void sendText(QString text);

};
