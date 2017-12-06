// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_SUB1XCOINSENTRY_H
#define BITCOIN_QT_SUB1XCOINSENTRY_H

#include "walletmodel.h"

#include <QStackedWidget>

class WalletModel;

namespace Ui
{
class Sub1xCoinsEntry;
}

/**
 * A single entry in the dialog for sub1xing bitcoins.
 * Stacked widget, with different UIs for payment requests
 * with a strong payee identity.
 */
class Sub1xCoinsEntry : public QStackedWidget
{
    Q_OBJECT

public:
    explicit Sub1xCoinsEntry(QWidget* parent = 0);
    ~Sub1xCoinsEntry();

    void setModel(WalletModel* model);
    bool validate();
    Sub1xCoinsRecipient getValue();

    /** Return whether the entry is still empty and unedited */
    bool isClear();

    void setValue(const Sub1xCoinsRecipient& value);
    void setAddress(const QString& address);

    /** Set up the tab chain manually, as Qt messes up the tab chain by default in some cases
     *  (issue https://bugreports.qt-project.org/browse/QTBUG-10907).
     */
    QWidget* setupTabChain(QWidget* prev);

    void setFocus();

public slots:
    void clear();

signals:
    void removeEntry(Sub1xCoinsEntry* entry);
    void payAmountChanged();

private slots:
    void deleteClicked();
    void on_payTo_textChanged(const QString& address);
    void on_addressBookButton_clicked();
    void on_pasteButton_clicked();
    void updateDisplayUnit();

private:
    Sub1xCoinsRecipient recipient;
    Ui::Sub1xCoinsEntry* ui;
    WalletModel* model;

    bool updateLabel(const QString& address);
};

#endif // BITCOIN_QT_SUB1XCOINSENTRY_H
