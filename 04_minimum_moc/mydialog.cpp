
#include <QDebug>
#include <QtGui>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTimer>
#include "mydialog.h"
#include <QMessageBox>

MyDialog::MyDialog(QWidget* parent) : QDialog(parent) {
    lineEdit = new QLineEdit;
    pushBtn = new QPushButton(tr("&Close"));

    connect(pushBtn, &QPushButton::clicked, this, &QDialog::close);
    // CONFIG += c++11 required
    connect(lineEdit, &QLineEdit::textChanged, this, [=](const QString& text){
            // simulate background searching
            QTimer::singleShot(3000, this, [=](){
                    if (search(text) == true) {
                        emit onDoneSearching(text);
                    }
                });
        });
    connect(this, &MyDialog::onDoneSearching, this, &MyDialog::found);

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(lineEdit);
    layout->addWidget(pushBtn);

    setLayout(layout);
}

bool MyDialog::search(const QString& keyword) {
    if (keyword == "QT5") {
        return true;
    }

    return false;
}

void MyDialog::found(const QString& param) {
// if (QMessageBox::Yes == QMessageBox(QMessageBox::Information, "title", "Question", QMessageBox::Yes|QMessageBox::No).exec())
// {
// }
    QMessageBox::information(this,
        tr(""),
        param);
}
