#ifndef ALTURA_H
#define ALTURA_H

#include <QDialog>
#include <QString>

namespace Ui {
class Altura;
}

class Altura : public QDialog
{
    Q_OBJECT

public:
    explicit Altura(QWidget *parent = nullptr);
    ~Altura();

    int peso() const;
    int altura() const;

private slots:
    void on_cmdOC_accepted();

    void on_cmdOC_rejected();
    void imc();



private:
    Ui::Altura *ui;
};

#endif // ALTURA_H

