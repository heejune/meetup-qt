

#include "ui_askdlg.h"
#include <QDialog>

class AskDialog : public QDialog, public Ui::AskWidget
{
    Q_OBJECT
public:
	AskDialog(QWidget* parent = 0);
};
