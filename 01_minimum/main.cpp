#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QPushButton hello("Hello world!");

    hello.resize(100, 30);
    hello.show();

    return app.exec();
}

// Add 'QT       += widgets' into .pro
// ~/Qt5.6.0/5.6/clang_64/bin/qmake -project
