#ifndef MULTISUB1XDIALOG_H
#define MULTISUB1XDIALOG_H

#include <QDialog>

namespace Ui
{
class MultiSub1xDialog;
}

class WalletModel;
class QLineEdit;
class MultiSub1xDialog : public QDialog
{
    Q_OBJECT
    void updateCheckBoxes();

public:
    explicit MultiSub1xDialog(QWidget* parent = 0);
    ~MultiSub1xDialog();
    void setModel(WalletModel* model);
    void setAddress(const QString& address);
    void setAddress(const QString& address, QLineEdit* addrEdit);
private slots:
    void on_viewButton_clicked();
    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_activateButton_clicked();
    void on_disableButton_clicked();
    void on_addressBookButton_clicked();

private:
    Ui::MultiSub1xDialog* ui;
    WalletModel* model;
};

#endif // MULTISUB1XDIALOG_H
