#include "TaoEngine.h"

#include <QGuiApplication>
#include <QQmlContext>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    TaoEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
                         if (!obj && url == objUrl)
                             QCoreApplication::exit(-1);
                     }, Qt::QueuedConnection);
    qWarning() << engine.offlineStoragePath();
    engine.rootContext()->setContextProperty("engine", &engine);
    engine.load(url);

    return app.exec();
}
