#include <QApplication>
#include <QPushButton>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QPushButton btn("Quit");
    QObject::connect(&btn, &QPushButton::clicked, &app, &QApplication::quit);
    btn.show();

    return app.exec();
}
