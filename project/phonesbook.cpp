#include "phonesbook.h"
#include "ui_phonesbook.h"

Phonesbook::Phonesbook(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Phonesbook)
{
    ui->setupUi(this);
}

Phonesbook::~Phonesbook()
{
    delete ui;
}
