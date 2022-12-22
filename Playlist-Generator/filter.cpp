#include "filter.h"
#include "ui_filter.h"

Filter::Filter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Filter)
{
    ui->setupUi(this);
    ui->lineKey->setEnabled(false);
    ui->lineArtist->setEnabled(false);
    ui->scrollGenre->setEnabled(false);
}

Filter::~Filter()
{
    delete ui;
}

void Filter::on_fsaveButton_clicked()
{
    hide();
}


void Filter::on_checkKey_stateChanged(int arg1)
{
    if(arg1) ui->lineKey->setEnabled(true);
    if(!arg1) ui->lineKey->setEnabled(false);
}


void Filter::on_checkArtist_stateChanged(int arg1)
{
    if(arg1) ui->lineArtist->setEnabled(true);
    if(!arg1) ui->lineArtist->setEnabled(false);
}


void Filter::on_checkGenre_stateChanged(int arg1)
{
    if(arg1) ui->scrollGenre->setEnabled(true);
    if(!arg1) ui->scrollGenre->setEnabled(false);
}


void Filter::on_lineKey_textEdited(const QString &key)
{
    if(ui->checkKey->isEnabled()) keyword = key;
    else keyword = nullptr;
}


void Filter::on_lineArtist_textEdited(const QString &art)
{
    if(ui->checkArtist->isEnabled()) artist = art;
    else artist = nullptr;
}

