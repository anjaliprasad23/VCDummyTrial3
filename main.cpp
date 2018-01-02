#include <QGuiApplication>
#include <QQmlApplicationEngine>
//#include <QFile>
//#include <QTextStream>
#include <QDebug>

//void Read(QString testfile){
//    QFile mFile(testfile);

//    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
//        qDebug() << "Can't open testfile";
//        return;
//    }

//    QTextStream in(&mFile);
//    QString mText = in.readAll();
//    qDebug() << mText;
//    mFile.close();

//}

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    //Read(":/MyFiles/testfile.txt");
//    QQmlApplicationEngine engine;
//    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
//    if (engine.rootObjects().isEmpty())
//        return -1;

//    return app.exec();

    qDebug() << "Version: " <<QString("%1.%2.%3").arg(VERSION_MAJOR).arg(VERSION_MINOR).arg(VERSION_BUILD);
    return 0;
}


