#ifndef PHONESBOOK_H
#define PHONESBOOK_H

#include <QWidget>

namespace Ui {
class Phonesbook;
}

class Phonesbook : public QWidget
{
    Q_OBJECT

public:
    explicit Phonesbook(QWidget *parent = nullptr);
    ~Phonesbook();

private:
    Ui::Phonesbook *ui;
};

#endif // PHONESBOOK_H
