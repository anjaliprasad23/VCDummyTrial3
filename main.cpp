#include <QGuiApplication>
#include <QQmlApplicationEngine>
//#include <QFile>
//#include <QTextStream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    //qDebug() << "Version: " << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_BUILD;
          //qDebug() << "Version: " <<QString("%1.%2.%3").arg(VERSION_MAJOR).arg(VERSION_MINOR).arg(VERSION_BUILD);
    qDebug() << "Version: " <<QString("%1.%2.%3").arg(VERSION_MAJOR).arg(VERSION_MINOR).arg(VERSION_BUILD);
                  //QString("%1.%2.%3").arg(VERSION_MAJOR).arg(VERSION_MINOR).ar‌​g(VERSION_BUILD);
    return 0;
}


