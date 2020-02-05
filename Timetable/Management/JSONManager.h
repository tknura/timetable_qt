#ifndef JSONMANAGER_H
#define JSONMANAGER_H

#include "MainManager.h"
#include <QString>
#include <QFile>
#include <QIODevice>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

class JSONManager
{
private:
    static QString jsonFileName;
    static void LoadData(const QJsonObject& json);
    static void WriteData(QJsonObject& json);

public:
    static bool Save();
    static bool Load();
};

#endif // JSONWRITER_H
