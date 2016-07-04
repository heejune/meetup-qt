
#include <QApplication>
#include "mydialog.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    MyDialog* mydlg = new MyDialog;
    mydlg->show();
    return app.exec();
}
