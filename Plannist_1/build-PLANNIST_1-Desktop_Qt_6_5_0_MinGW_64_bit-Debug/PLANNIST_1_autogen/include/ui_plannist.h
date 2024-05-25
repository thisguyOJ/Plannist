/********************************************************************************
** Form generated from reading UI file 'plannist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANNIST_H
#define UI_PLANNIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plannist
{
public:

    void setupUi(QWidget *Plannist)
    {
        if (Plannist->objectName().isEmpty())
            Plannist->setObjectName("Plannist");
        Plannist->resize(800, 600);

        retranslateUi(Plannist);

        QMetaObject::connectSlotsByName(Plannist);
    } // setupUi

    void retranslateUi(QWidget *Plannist)
    {
        Plannist->setWindowTitle(QCoreApplication::translate("Plannist", "Plannist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Plannist: public Ui_Plannist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNIST_H
