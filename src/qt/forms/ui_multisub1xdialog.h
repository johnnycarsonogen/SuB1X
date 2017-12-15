/********************************************************************************
** Form generated from reading UI file 'multisub1xdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISUB1XDIALOG_H
#define UI_MULTISUB1XDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiSub1xDialog
{
public:
    QLineEdit *multiSub1xPercentEdit;
    QLineEdit *multiSub1xAddressEdit;
    QLabel *label_2;
    QLabel *message;
    QPushButton *addButton;
    QPushButton *disableButton;
    QPushButton *addressBookButton;
    QLabel *label;
    QLabel *label_5;
    QPushButton *deleteButton;
    QPushButton *activateButton;
    QPushButton *viewButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *multiSub1xStakeCheckBox;
    QCheckBox *multiSub1xMasternodeCheckBox;

    void setupUi(QDialog *MultiSub1xDialog)
    {
        if (MultiSub1xDialog->objectName().isEmpty())
            MultiSub1xDialog->setObjectName(QStringLiteral("MultiSub1xDialog"));
        MultiSub1xDialog->setWindowModality(Qt::NonModal);
        MultiSub1xDialog->resize(652, 300);
        multiSub1xPercentEdit = new QLineEdit(MultiSub1xDialog);
        multiSub1xPercentEdit->setObjectName(QStringLiteral("multiSub1xPercentEdit"));
        multiSub1xPercentEdit->setGeometry(QRect(170, 130, 201, 20));
        multiSub1xAddressEdit = new QLineEdit(MultiSub1xDialog);
        multiSub1xAddressEdit->setObjectName(QStringLiteral("multiSub1xAddressEdit"));
        multiSub1xAddressEdit->setGeometry(QRect(170, 160, 401, 21));
        label_2 = new QLabel(MultiSub1xDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 0, 451, 121));
        label_2->setLineWidth(1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        message = new QLabel(MultiSub1xDialog);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(290, 200, 351, 91));
        addButton = new QPushButton(MultiSub1xDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(20, 230, 120, 23));
        disableButton = new QPushButton(MultiSub1xDialog);
        disableButton->setObjectName(QStringLiteral("disableButton"));
        disableButton->setGeometry(QRect(150, 260, 120, 23));
        addressBookButton = new QPushButton(MultiSub1xDialog);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        addressBookButton->setGeometry(QRect(570, 160, 28, 21));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setAutoDefault(false);
        label = new QLabel(MultiSub1xDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 130, 121, 20));
        label_5 = new QLabel(MultiSub1xDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 160, 111, 16));
        deleteButton = new QPushButton(MultiSub1xDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(150, 230, 120, 23));
        activateButton = new QPushButton(MultiSub1xDialog);
        activateButton->setObjectName(QStringLiteral("activateButton"));
        activateButton->setGeometry(QRect(20, 260, 120, 23));
        viewButton = new QPushButton(MultiSub1xDialog);
        viewButton->setObjectName(QStringLiteral("viewButton"));
        viewButton->setGeometry(QRect(20, 200, 251, 23));
        horizontalLayoutWidget = new QWidget(MultiSub1xDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 100, 351, 24));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        multiSub1xStakeCheckBox = new QCheckBox(horizontalLayoutWidget);
        multiSub1xStakeCheckBox->setObjectName(QStringLiteral("multiSub1xStakeCheckBox"));

        horizontalLayout->addWidget(multiSub1xStakeCheckBox);

        multiSub1xMasternodeCheckBox = new QCheckBox(horizontalLayoutWidget);
        multiSub1xMasternodeCheckBox->setObjectName(QStringLiteral("multiSub1xMasternodeCheckBox"));

        horizontalLayout->addWidget(multiSub1xMasternodeCheckBox);


        retranslateUi(MultiSub1xDialog);

        QMetaObject::connectSlotsByName(MultiSub1xDialog);
    } // setupUi

    void retranslateUi(QDialog *MultiSub1xDialog)
    {
        MultiSub1xDialog->setWindowTitle(QApplication::translate("MultiSub1xDialog", "MultiSub1x", 0));
#ifndef QT_NO_TOOLTIP
        multiSub1xPercentEdit->setToolTip(QApplication::translate("MultiSub1xDialog", "Enter whole numbers 1 - 100", 0));
#endif // QT_NO_TOOLTIP
        multiSub1xPercentEdit->setPlaceholderText(QApplication::translate("MultiSub1xDialog", "Enter % to Give (1-100)", 0));
#ifndef QT_NO_TOOLTIP
        multiSub1xAddressEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        multiSub1xAddressEdit->setPlaceholderText(QApplication::translate("MultiSub1xDialog", "Enter Address to Sub1x to", 0));
        label_2->setText(QApplication::translate("MultiSub1xDialog", "MultiSub1x allows you to automatically sub1x up to 100% of your stake or masternode reward to a list of other SUB1X addresses after it matures.\n"
"To Add: enter percentage to give and SUB1X address to add to the MultiSub1x vector.\n"
"To Delete: Enter address to delete and press delete.\n"
"MultiSub1x will not be activated unless you have clicked Activate", 0));
        message->setText(QString());
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        addButton->setStatusTip(QApplication::translate("MultiSub1xDialog", "Add to MultiSub1x Vector", 0));
#endif // QT_NO_STATUSTIP
        addButton->setText(QApplication::translate("MultiSub1xDialog", "Add", 0));
#ifndef QT_NO_STATUSTIP
        disableButton->setStatusTip(QApplication::translate("MultiSub1xDialog", "Deactivate MultiSub1x", 0));
#endif // QT_NO_STATUSTIP
        disableButton->setText(QApplication::translate("MultiSub1xDialog", "Deactivate", 0));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("MultiSub1xDialog", "Choose an address from the address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("MultiSub1xDialog", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MultiSub1xDialog", "Percentage of stake to sub1x", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MultiSub1xDialog", "Percentage:", 0));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("MultiSub1xDialog", "Address to sub1x portion of stake to", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MultiSub1xDialog", "Address:", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        deleteButton->setStatusTip(QApplication::translate("MultiSub1xDialog", "Delete Address From MultiSub1x Vector", 0));
#endif // QT_NO_STATUSTIP
        deleteButton->setText(QApplication::translate("MultiSub1xDialog", "Delete", 0));
#ifndef QT_NO_STATUSTIP
        activateButton->setStatusTip(QApplication::translate("MultiSub1xDialog", "Activate MultiSub1x", 0));
#endif // QT_NO_STATUSTIP
        activateButton->setText(QApplication::translate("MultiSub1xDialog", "Activate", 0));
#ifndef QT_NO_TOOLTIP
        viewButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewButton->setStatusTip(QApplication::translate("MultiSub1xDialog", "View MultiSub1x Vector", 0));
#endif // QT_NO_STATUSTIP
        viewButton->setText(QApplication::translate("MultiSub1xDialog", "View MultiSub1x", 0));
        multiSub1xStakeCheckBox->setText(QApplication::translate("MultiSub1xDialog", "Sub1x For Stakes", 0));
        multiSub1xMasternodeCheckBox->setText(QApplication::translate("MultiSub1xDialog", "Sub1x For Masternode Rewards", 0));
    } // retranslateUi

};

namespace Ui {
    class MultiSub1xDialog: public Ui_MultiSub1xDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISUB1XDIALOG_H
