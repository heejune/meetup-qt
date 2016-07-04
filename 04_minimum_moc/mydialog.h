#ifndef __DIALOG_H__
#define __DIALOG_H__

#include <QDialog>

class QPushButton;
class QLineEdit;

class MyDialog : public QDialog {
    Q_OBJECT

public:
    explicit MyDialog(QWidget* parent = nullptr);

signals:
    void onDoneSearching(const QString& param);

private slots:
    void found(const QString& param);
private:
    bool search(const QString& keyword);

    QLineEdit* lineEdit;
    QPushButton* pushBtn;
};

#endif // __DIALOG_H__
