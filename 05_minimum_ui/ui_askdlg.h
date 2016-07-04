/********************************************************************************
** Form generated from reading UI file 'askdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKDLG_H
#define UI_ASKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AskWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AskWidget)
    {
        if (AskWidget->objectName().isEmpty())
            AskWidget->setObjectName(QStringLiteral("AskWidget"));
        AskWidget->resize(256, 89);
        verticalLayout = new QVBoxLayout(AskWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(AskWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(AskWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(AskWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(AskWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(AskWidget);

        QMetaObject::connectSlotsByName(AskWidget);
    } // setupUi

    void retranslateUi(QWidget *AskWidget)
    {
        AskWidget->setWindowTitle(QApplication::translate("AskWidget", "Form", 0));
        label->setText(QApplication::translate("AskWidget", "&Favorite color?", 0));
        pushButton->setText(QApplication::translate("AskWidget", "&Okay", 0));
        pushButton_2->setText(QApplication::translate("AskWidget", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AskWidget: public Ui_AskWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKDLG_H
