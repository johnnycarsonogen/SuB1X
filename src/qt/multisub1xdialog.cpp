#include "multisub1xdialog.h"
#include "addressbookpage.h"
#include "base58.h"
#include "init.h"
#include "ui_multisub1xdialog.h"
#include "walletmodel.h"
#include <QLineEdit>
#include <QMessageBox>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

MultiSub1xDialog::MultiSub1xDialog(QWidget* parent) : QDialog(parent),
                                                    ui(new Ui::MultiSub1xDialog),
                                                    model(0)
{
    ui->setupUi(this);

    updateCheckBoxes();
}

MultiSub1xDialog::~MultiSub1xDialog()
{
    delete ui;
}

void MultiSub1xDialog::setModel(WalletModel* model)
{
    this->model = model;
}

void MultiSub1xDialog::setAddress(const QString& address)
{
    setAddress(address, ui->multiSub1xAddressEdit);
}

void MultiSub1xDialog::setAddress(const QString& address, QLineEdit* addrEdit)
{
    addrEdit->setText(address);
    addrEdit->setFocus();
}

void MultiSub1xDialog::updateCheckBoxes()
{
    ui->multiSub1xStakeCheckBox->setChecked(pwalletMain->fMultiSub1xStake);
    ui->multiSub1xMasternodeCheckBox->setChecked(pwalletMain->fMultiSub1xMasternodeReward);
}

void MultiSub1xDialog::on_addressBookButton_clicked()
{
    if (model && model->getAddressTableModel()) {
        AddressBookPage dlg(AddressBookPage::ForSelection, AddressBookPage::Sub1xingTab, this);
        dlg.setModel(model->getAddressTableModel());
        if (dlg.exec())
            setAddress(dlg.getReturnValue(), ui->multiSub1xAddressEdit);
    }
}

void MultiSub1xDialog::on_viewButton_clicked()
{
    std::pair<std::string, int> pMultiSub1x;
    std::string strMultiSub1xPrint = "";
    if (pwalletMain->isMultiSub1xEnabled()) {
        if (pwalletMain->fMultiSub1xStake)
            strMultiSub1xPrint += "MultiSub1x Active for Stakes\n";
        else if (pwalletMain->fMultiSub1xStake)
            strMultiSub1xPrint += "MultiSub1x Active for Masternode Rewards\n";
    } else
        strMultiSub1xPrint += "MultiSub1x Not Active\n";

    for (int i = 0; i < (int)pwalletMain->vMultiSub1x.size(); i++) {
        pMultiSub1x = pwalletMain->vMultiSub1x[i];
        strMultiSub1xPrint += pMultiSub1x.first.c_str();
        strMultiSub1xPrint += " - ";
        strMultiSub1xPrint += boost::lexical_cast<string>(pMultiSub1x.second);
        strMultiSub1xPrint += "% \n";
    }
    ui->message->setProperty("status", "ok");
    ui->message->style()->polish(ui->message);
    ui->message->setText(QString(strMultiSub1xPrint.c_str()));
    return;
}

void MultiSub1xDialog::on_addButton_clicked()
{
    bool fValidConversion = false;
    std::string strAddress = ui->multiSub1xAddressEdit->text().toStdString();
    if (!CBitcoinAddress(strAddress).IsValid()) {
        ui->message->setProperty("status", "error");
        ui->message->style()->polish(ui->message);
        ui->message->setText(tr("The entered address:\n") + ui->multiSub1xAddressEdit->text() + tr(" is invalid.\nPlease check the address and try again."));
        ui->multiSub1xAddressEdit->setFocus();
        return;
    }
    int nMultiSub1xPercent = ui->multiSub1xPercentEdit->text().toInt(&fValidConversion, 10);
    int nSumMultiSub1x = 0;
    for (int i = 0; i < (int)pwalletMain->vMultiSub1x.size(); i++)
        nSumMultiSub1x += pwalletMain->vMultiSub1x[i].second;
    if (nSumMultiSub1x + nMultiSub1xPercent > 100) {
        ui->message->setProperty("status", "error");
        ui->message->style()->polish(ui->message);
        ui->message->setText(tr("The total amount of your MultiSub1x vector is over 100% of your stake reward\n"));
        ui->multiSub1xAddressEdit->setFocus();
        return;
    }
    if (!fValidConversion || nMultiSub1xPercent > 100 || nMultiSub1xPercent <= 0) {
        ui->message->setProperty("status", "error");
        ui->message->style()->polish(ui->message);
        ui->message->setText(tr("Please Enter 1 - 100 for percent."));
        ui->multiSub1xPercentEdit->setFocus();
        return;
    }
    std::pair<std::string, int> pMultiSub1x;
    pMultiSub1x.first = strAddress;
    pMultiSub1x.second = nMultiSub1xPercent;
    pwalletMain->vMultiSub1x.push_back(pMultiSub1x);
    ui->message->setProperty("status", "ok");
    ui->message->style()->polish(ui->message);
    std::string strMultiSub1xPrint = "";
    for (int i = 0; i < (int)pwalletMain->vMultiSub1x.size(); i++) {
        pMultiSub1x = pwalletMain->vMultiSub1x[i];
        strMultiSub1xPrint += pMultiSub1x.first.c_str();
        strMultiSub1xPrint += " - ";
        strMultiSub1xPrint += boost::lexical_cast<string>(pMultiSub1x.second);
        strMultiSub1xPrint += "% \n";
    }
    CWalletDB walletdb(pwalletMain->strWalletFile);
    walletdb.WriteMultiSub1x(pwalletMain->vMultiSub1x);
    ui->message->setText(tr("MultiSub1x Vector\n") + QString(strMultiSub1xPrint.c_str()));
    return;
}

void MultiSub1xDialog::on_deleteButton_clicked()
{
    std::vector<std::pair<std::string, int> > vMultiSub1xTemp = pwalletMain->vMultiSub1x;
    std::string strAddress = ui->multiSub1xAddressEdit->text().toStdString();
    bool fRemoved = false;
    for (int i = 0; i < (int)pwalletMain->vMultiSub1x.size(); i++) {
        if (pwalletMain->vMultiSub1x[i].first == strAddress) {
            pwalletMain->vMultiSub1x.erase(pwalletMain->vMultiSub1x.begin() + i);
            fRemoved = true;
        }
    }
    CWalletDB walletdb(pwalletMain->strWalletFile);
    if (!walletdb.EraseMultiSub1x(vMultiSub1xTemp))
        fRemoved = false;
    if (!walletdb.WriteMultiSub1x(pwalletMain->vMultiSub1x))
        fRemoved = false;

    if (fRemoved)
        ui->message->setText(tr("Removed ") + QString(strAddress.c_str()));
    else
        ui->message->setText(tr("Could not locate address\n"));

    updateCheckBoxes();

    return;
}

void MultiSub1xDialog::on_activateButton_clicked()
{
    std::string strRet = "";
    if (pwalletMain->vMultiSub1x.size() < 1)
        strRet = "Unable to activate MultiSub1x, check MultiSub1x vector\n";
    else if (!(ui->multiSub1xStakeCheckBox->isChecked() || ui->multiSub1xMasternodeCheckBox->isChecked())) {
        strRet = "Need to select to sub1x on stake and/or masternode rewards\n";
    } else if (CBitcoinAddress(pwalletMain->vMultiSub1x[0].first).IsValid()) {
        pwalletMain->fMultiSub1xStake = ui->multiSub1xStakeCheckBox->isChecked();
        pwalletMain->fMultiSub1xMasternodeReward = ui->multiSub1xMasternodeCheckBox->isChecked();

        CWalletDB walletdb(pwalletMain->strWalletFile);
        if (!walletdb.WriteMSettings(pwalletMain->fMultiSub1xStake, pwalletMain->fMultiSub1xMasternodeReward, pwalletMain->nLastMultiSub1xHeight))
            strRet = "MultiSub1x activated but writing settings to DB failed";
        else
            strRet = "MultiSub1x activated";
    } else
        strRet = "First Address Not Valid";
    ui->message->setProperty("status", "ok");
    ui->message->style()->polish(ui->message);
    ui->message->setText(tr(strRet.c_str()));
    return;
}

void MultiSub1xDialog::on_disableButton_clicked()
{
    std::string strRet = "";
    pwalletMain->setMultiSub1xDisabled();
    CWalletDB walletdb(pwalletMain->strWalletFile);
    if (!walletdb.WriteMSettings(false, false, pwalletMain->nLastMultiSub1xHeight))
        strRet = "MultiSub1x deactivated but writing settings to DB failed";
    else
        strRet = "MultiSub1x deactivated";
    ui->message->setProperty("status", "");
    ui->message->style()->polish(ui->message);
    ui->message->setText(tr(strRet.c_str()));
    return;
}
