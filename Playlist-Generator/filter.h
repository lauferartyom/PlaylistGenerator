#ifndef FILTER_H
#define FILTER_H

#include <QDialog>

namespace Ui {
class Filter;
}

class Filter : public QDialog
{
    Q_OBJECT

public:
    QString keyword = nullptr;
    QString artist = nullptr;
    explicit Filter(QWidget *parent = nullptr);
    ~Filter();

private slots:
    void on_fsaveButton_clicked();

    void on_checkKey_stateChanged(int arg1);

    void on_checkArtist_stateChanged(int arg1);

    void on_checkGenre_stateChanged(int arg1);

    void on_lineKey_textEdited(const QString &arg1);

    void on_lineArtist_textEdited(const QString &arg1);

private:
    Ui::Filter *ui;

};

#endif // FILTER_H
