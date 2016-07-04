#include <QApplication>
#include <QDialog>
#include <QMainWindow>

#include "askdlg.h"

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);

	// #1
	//Ui::AskWidget dlg;
	//QDialog* window = new QDialog;
	//dlg.setupUi(window);

	// or
	// #2
	AskDialog* dialog = new AskDialog;
	dialog->show();

	return app.exec();
}
