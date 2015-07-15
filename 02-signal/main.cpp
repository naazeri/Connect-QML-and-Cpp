#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "message.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QQmlApplicationEngine engine;
	Message *msg = new Message();

	auto root_contex = engine.rootContext();
	root_contex->setContextProperty("messageClass", msg);
	engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

	return app.exec();
}
