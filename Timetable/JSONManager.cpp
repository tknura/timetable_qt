#include "JSONManager.h"
QString JSONManager::jsonFileName = "events.json";

void JSONManager::LoadData(const QJsonObject& json) {
    MainManager::eventList.Clear();
    QJsonArray jsonEventArray = json["events"].toArray();
    for(int i = 0; i < jsonEventArray.size(); ++i){
        QJsonObject eventObj = jsonEventArray[i].toObject();
        Event event;
        event.Read(eventObj);
        MainManager::eventList.PushBack(event);
    }

}

void JSONManager::WriteData(QJsonObject& json) {
    QJsonArray jsonEventArray;
    for(int i = 0; i < MainManager::eventList.Length(); i++){
        QJsonObject eventObject;
        MainManager::eventList[i].Write(eventObject);
        jsonEventArray.append(eventObject);
    }
    json["events"] = jsonEventArray;
}

bool JSONManager::Save() {
    QFile saveFile(jsonFileName);

    if(!saveFile.open(QIODevice::WriteOnly)) {
        std::cerr << "ERROR! Couldn't open json file\n";
        return false;
    }

    QJsonObject eventJsonObj;
    WriteData(eventJsonObj);
    QJsonDocument saveDoc(eventJsonObj);
    saveFile.write(saveDoc.toJson());
    return true;
}

bool JSONManager::Load() {
    QFile loadFile(jsonFileName);

    if(!loadFile.open(QIODevice::ReadOnly)) {
        std::cerr << "ERROR! Couldn't open json file\n";
        return false;
    }

    QByteArray saveData = loadFile.readAll();
    QJsonDocument loadDoc(QJsonDocument::fromJson(saveData));
    LoadData(loadDoc.object());
    return true;
}
