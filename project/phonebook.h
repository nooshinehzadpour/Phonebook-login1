#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <QWidget>

namespace Ui {
class PhoneBook;
}

class PhoneBook : public QWidget
{
    Q_OBJECT

public:
    explicit PhoneBook(QWidget *parent = nullptr);
    ~PhoneBook();

private:
    Ui::PhoneBook *ui;
};

#endif // PHONEBOOK_H
