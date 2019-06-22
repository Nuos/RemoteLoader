#pragma once
#include <QQmlApplicationEngine>

class TaoEngine : public QQmlApplicationEngine
{
    Q_OBJECT
public slots:
    void clearCache()
    {
        clearComponentCache();
    }
};

