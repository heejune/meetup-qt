#include <QDebug>
#include <QCoreApplication>

int main(int argc, char* argv[]) {

    QCoreApplication a(argc, argv);

    qDebug() << "Hello from console!" << endl;
    //return a.exec();
    QCoreApplication::exit(0);
//return 0;
}


// CONFIG   -= app_bundle
// CONFIG += console
