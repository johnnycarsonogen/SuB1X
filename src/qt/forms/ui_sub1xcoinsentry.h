/********************************************************************************
** Form generated from reading UI file 'sub1xcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUB1XCOINSENTRY_H
#define UI_SUB1XCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Sub1xCoinsEntry
{
public:
    QFrame *Sub1xCoins;
    QGridLayout *gridLayout;
    QLabel *payToLabel;
    QHBoxLayout *payToLayout;
    QValidatedLineEdit *payTo;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QLabel *labelLabel;
    QLineEdit *addAsLabel;
    QLabel *amountLabel;
    BitcoinAmountField *payAmount;
    QLabel *messageLabel;
    QLabel *messageTextLabel;
    QFrame *Sub1xCoins_InsecurePaymentRequest;
    QGridLayout *gridLayout_is;
    QLabel *payToLabel_is;
    QHBoxLayout *payToLayout_is;
    QLabel *payTo_is;
    QToolButton *deleteButton_is;
    QLabel *memoLabel_is;
    QLabel *memoTextLabel_is;
    QLabel *amountLabel_is;
    BitcoinAmountField *payAmount_is;
    QFrame *Sub1xCoins_SecurePaymentRequest;
    QGridLayout *gridLayout_s;
    QLabel *payToLabel_s;
    QHBoxLayout *payToLayout_s;
    QLabel *payTo_s;
    QToolButton *deleteButton_s;
    QLabel *memoLabel_s;
    QLabel *memoTextLabel_s;
    QLabel *amountLabel_s;
    BitcoinAmountField *payAmount_s;

    void setupUi(QStackedWidget *Sub1xCoinsEntry)
    {
        if (Sub1xCoinsEntry->objectName().isEmpty())
            Sub1xCoinsEntry->setObjectName(QStringLiteral("Sub1xCoinsEntry"));
        Sub1xCoinsEntry->resize(729, 156);
        Sub1xCoinsEntry->setFocusPolicy(Qt::TabFocus);
        Sub1xCoinsEntry->setAutoFillBackground(false);
        Sub1xCoins = new QFrame();
        Sub1xCoins->setObjectName(QStringLiteral("Sub1xCoins"));
        Sub1xCoins->setFrameShape(QFrame::StyledPanel);
        Sub1xCoins->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(Sub1xCoins);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        payToLabel = new QLabel(Sub1xCoins);
        payToLabel->setObjectName(QStringLiteral("payToLabel"));
        payToLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(payToLabel, 0, 0, 1, 1);

        payToLayout = new QHBoxLayout();
        payToLayout->setSpacing(0);
        payToLayout->setObjectName(QStringLiteral("payToLayout"));
        payTo = new QValidatedLineEdit(Sub1xCoins);
        payTo->setObjectName(QStringLiteral("payTo"));

        payToLayout->addWidget(payTo);

        addressBookButton = new QToolButton(Sub1xCoins);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);

        payToLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(Sub1xCoins);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);

        payToLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(Sub1xCoins);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);

        payToLayout->addWidget(deleteButton);


        gridLayout->addLayout(payToLayout, 0, 1, 1, 1);

        labelLabel = new QLabel(Sub1xCoins);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));
        labelLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLabel, 1, 0, 1, 1);

        addAsLabel = new QLineEdit(Sub1xCoins);
        addAsLabel->setObjectName(QStringLiteral("addAsLabel"));

        gridLayout->addWidget(addAsLabel, 1, 1, 1, 1);

        amountLabel = new QLabel(Sub1xCoins);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));
        amountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(amountLabel, 2, 0, 1, 1);

        payAmount = new BitcoinAmountField(Sub1xCoins);
        payAmount->setObjectName(QStringLiteral("payAmount"));

        gridLayout->addWidget(payAmount, 2, 1, 1, 1);

        messageLabel = new QLabel(Sub1xCoins);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(messageLabel, 3, 0, 1, 1);

        messageTextLabel = new QLabel(Sub1xCoins);
        messageTextLabel->setObjectName(QStringLiteral("messageTextLabel"));
        messageTextLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(messageTextLabel, 3, 1, 1, 1);

        Sub1xCoinsEntry->addWidget(Sub1xCoins);
        Sub1xCoins_InsecurePaymentRequest = new QFrame();
        Sub1xCoins_InsecurePaymentRequest->setObjectName(QStringLiteral("Sub1xCoins_InsecurePaymentRequest"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 255, 191, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Sub1xCoins_InsecurePaymentRequest->setPalette(palette);
        Sub1xCoins_InsecurePaymentRequest->setAutoFillBackground(true);
        Sub1xCoins_InsecurePaymentRequest->setFrameShape(QFrame::StyledPanel);
        Sub1xCoins_InsecurePaymentRequest->setFrameShadow(QFrame::Sunken);
        gridLayout_is = new QGridLayout(Sub1xCoins_InsecurePaymentRequest);
        gridLayout_is->setSpacing(12);
        gridLayout_is->setObjectName(QStringLiteral("gridLayout_is"));
        payToLabel_is = new QLabel(Sub1xCoins_InsecurePaymentRequest);
        payToLabel_is->setObjectName(QStringLiteral("payToLabel_is"));
        payToLabel_is->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_is->addWidget(payToLabel_is, 0, 0, 1, 1);

        payToLayout_is = new QHBoxLayout();
        payToLayout_is->setSpacing(0);
        payToLayout_is->setObjectName(QStringLiteral("payToLayout_is"));
        payTo_is = new QLabel(Sub1xCoins_InsecurePaymentRequest);
        payTo_is->setObjectName(QStringLiteral("payTo_is"));

        payToLayout_is->addWidget(payTo_is);

        deleteButton_is = new QToolButton(Sub1xCoins_InsecurePaymentRequest);
        deleteButton_is->setObjectName(QStringLiteral("deleteButton_is"));
        deleteButton_is->setIcon(icon2);

        payToLayout_is->addWidget(deleteButton_is);


        gridLayout_is->addLayout(payToLayout_is, 0, 1, 1, 1);

        memoLabel_is = new QLabel(Sub1xCoins_InsecurePaymentRequest);
        memoLabel_is->setObjectName(QStringLiteral("memoLabel_is"));
        memoLabel_is->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_is->addWidget(memoLabel_is, 1, 0, 1, 1);

        memoTextLabel_is = new QLabel(Sub1xCoins_InsecurePaymentRequest);
        memoTextLabel_is->setObjectName(QStringLiteral("memoTextLabel_is"));
        memoTextLabel_is->setTextFormat(Qt::PlainText);

        gridLayout_is->addWidget(memoTextLabel_is, 1, 1, 1, 1);

        amountLabel_is = new QLabel(Sub1xCoins_InsecurePaymentRequest);
        amountLabel_is->setObjectName(QStringLiteral("amountLabel_is"));
        amountLabel_is->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_is->addWidget(amountLabel_is, 2, 0, 1, 1);

        payAmount_is = new BitcoinAmountField(Sub1xCoins_InsecurePaymentRequest);
        payAmount_is->setObjectName(QStringLiteral("payAmount_is"));
        payAmount_is->setAcceptDrops(false);

        gridLayout_is->addWidget(payAmount_is, 2, 1, 1, 1);

        Sub1xCoinsEntry->addWidget(Sub1xCoins_InsecurePaymentRequest);
        Sub1xCoins_SecurePaymentRequest = new QFrame();
        Sub1xCoins_SecurePaymentRequest->setObjectName(QStringLiteral("Sub1xCoins_SecurePaymentRequest"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(140, 232, 119, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(230, 255, 224, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(185, 243, 171, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(70, 116, 59, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(93, 155, 79, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush12(QColor(155, 255, 147, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush13(QColor(119, 255, 233, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush14(QColor(197, 243, 187, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        QBrush brush15(QColor(125, 194, 122, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush15);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Sub1xCoins_SecurePaymentRequest->setPalette(palette1);
        Sub1xCoins_SecurePaymentRequest->setAutoFillBackground(true);
        Sub1xCoins_SecurePaymentRequest->setFrameShape(QFrame::StyledPanel);
        Sub1xCoins_SecurePaymentRequest->setFrameShadow(QFrame::Sunken);
        gridLayout_s = new QGridLayout(Sub1xCoins_SecurePaymentRequest);
        gridLayout_s->setSpacing(12);
        gridLayout_s->setObjectName(QStringLiteral("gridLayout_s"));
        payToLabel_s = new QLabel(Sub1xCoins_SecurePaymentRequest);
        payToLabel_s->setObjectName(QStringLiteral("payToLabel_s"));
        payToLabel_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_s->addWidget(payToLabel_s, 0, 0, 1, 1);

        payToLayout_s = new QHBoxLayout();
        payToLayout_s->setSpacing(0);
        payToLayout_s->setObjectName(QStringLiteral("payToLayout_s"));
        payTo_s = new QLabel(Sub1xCoins_SecurePaymentRequest);
        payTo_s->setObjectName(QStringLiteral("payTo_s"));
        payTo_s->setTextFormat(Qt::PlainText);

        payToLayout_s->addWidget(payTo_s);

        deleteButton_s = new QToolButton(Sub1xCoins_SecurePaymentRequest);
        deleteButton_s->setObjectName(QStringLiteral("deleteButton_s"));
        deleteButton_s->setIcon(icon2);

        payToLayout_s->addWidget(deleteButton_s);


        gridLayout_s->addLayout(payToLayout_s, 0, 1, 1, 1);

        memoLabel_s = new QLabel(Sub1xCoins_SecurePaymentRequest);
        memoLabel_s->setObjectName(QStringLiteral("memoLabel_s"));
        memoLabel_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_s->addWidget(memoLabel_s, 1, 0, 1, 1);

        memoTextLabel_s = new QLabel(Sub1xCoins_SecurePaymentRequest);
        memoTextLabel_s->setObjectName(QStringLiteral("memoTextLabel_s"));
        memoTextLabel_s->setTextFormat(Qt::PlainText);

        gridLayout_s->addWidget(memoTextLabel_s, 1, 1, 1, 1);

        amountLabel_s = new QLabel(Sub1xCoins_SecurePaymentRequest);
        amountLabel_s->setObjectName(QStringLiteral("amountLabel_s"));
        amountLabel_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_s->addWidget(amountLabel_s, 2, 0, 1, 1);

        payAmount_s = new BitcoinAmountField(Sub1xCoins_SecurePaymentRequest);
        payAmount_s->setObjectName(QStringLiteral("payAmount_s"));
        payAmount_s->setAcceptDrops(false);

        gridLayout_s->addWidget(payAmount_s, 2, 1, 1, 1);

        Sub1xCoinsEntry->addWidget(Sub1xCoins_SecurePaymentRequest);
#ifndef QT_NO_SHORTCUT
        payToLabel->setBuddy(payTo);
        labelLabel->setBuddy(addAsLabel);
        amountLabel->setBuddy(payAmount);
        amountLabel_is->setBuddy(payAmount_is);
        amountLabel_s->setBuddy(payAmount_s);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(payTo, addressBookButton);
        QWidget::setTabOrder(addressBookButton, pasteButton);
        QWidget::setTabOrder(pasteButton, deleteButton);
        QWidget::setTabOrder(deleteButton, addAsLabel);
        QWidget::setTabOrder(addAsLabel, payAmount);
        QWidget::setTabOrder(payAmount, payAmount_is);
        QWidget::setTabOrder(payAmount_is, deleteButton_is);
        QWidget::setTabOrder(deleteButton_is, payAmount_s);
        QWidget::setTabOrder(payAmount_s, deleteButton_s);

        retranslateUi(Sub1xCoinsEntry);

        QMetaObject::connectSlotsByName(Sub1xCoinsEntry);
    } // setupUi

    void retranslateUi(QStackedWidget *Sub1xCoinsEntry)
    {
#ifndef QT_NO_TOOLTIP
        Sub1xCoins->setToolTip(QApplication::translate("Sub1xCoinsEntry", "This is a normal payment.", 0));
#endif // QT_NO_TOOLTIP
        payToLabel->setText(QApplication::translate("Sub1xCoinsEntry", "Pay &To:", 0));
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("Sub1xCoinsEntry", "The SUB1X address to sub1x the payment to", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("Sub1xCoinsEntry", "Choose previously used address", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("Sub1xCoinsEntry", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("Sub1xCoinsEntry", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("Sub1xCoinsEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("Sub1xCoinsEntry", "Remove this entry", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        labelLabel->setText(QApplication::translate("Sub1xCoinsEntry", "&Label:", 0));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("Sub1xCoinsEntry", "Enter a label for this address to add it to the list of used addresses", 0));
#endif // QT_NO_TOOLTIP
        amountLabel->setText(QApplication::translate("Sub1xCoinsEntry", "A&mount:", 0));
        messageLabel->setText(QApplication::translate("Sub1xCoinsEntry", "Message:", 0));
#ifndef QT_NO_TOOLTIP
        messageTextLabel->setToolTip(QApplication::translate("Sub1xCoinsEntry", "A message that was attached to the SUB1X: URI which will be stored with the transaction for your reference. Note: This message will not be sent over the SUB1X network.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Sub1xCoins_InsecurePaymentRequest->setToolTip(QApplication::translate("Sub1xCoinsEntry", "This is an unverified payment request.", 0));
#endif // QT_NO_TOOLTIP
        payToLabel_is->setText(QApplication::translate("Sub1xCoinsEntry", "Pay To:", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton_is->setToolTip(QApplication::translate("Sub1xCoinsEntry", "Remove this entry", 0));
#endif // QT_NO_TOOLTIP
        deleteButton_is->setText(QString());
        memoLabel_is->setText(QApplication::translate("Sub1xCoinsEntry", "Memo:", 0));
        amountLabel_is->setText(QApplication::translate("Sub1xCoinsEntry", "A&mount:", 0));
#ifndef QT_NO_TOOLTIP
        Sub1xCoins_SecurePaymentRequest->setToolTip(QApplication::translate("Sub1xCoinsEntry", "This is a verified payment request.", 0));
#endif // QT_NO_TOOLTIP
        payToLabel_s->setText(QApplication::translate("Sub1xCoinsEntry", "Pay To:", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton_s->setToolTip(QApplication::translate("Sub1xCoinsEntry", "Remove this entry", 0));
#endif // QT_NO_TOOLTIP
        deleteButton_s->setText(QString());
        memoLabel_s->setText(QApplication::translate("Sub1xCoinsEntry", "Memo:", 0));
        amountLabel_s->setText(QApplication::translate("Sub1xCoinsEntry", "A&mount:", 0));
        Q_UNUSED(Sub1xCoinsEntry);
    } // retranslateUi

};

namespace Ui {
    class Sub1xCoinsEntry: public Ui_Sub1xCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUB1XCOINSENTRY_H
