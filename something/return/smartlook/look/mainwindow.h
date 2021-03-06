#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>

#include "tempo.h"
#include "closet.h"
#include "peca.h"
#include <QVector>
#include <QFileDialog>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnCadastro_clicked();
    void on_btnOrdenar_activated(const QString &arg1);

    void on_actionSalvar_triggered();
    void on_actionCarregar_triggered();

private:
    Ui::MainWindow *ui;
    Peca roupas;
    void inserirNaTabela(Closet a, int linha);
};
#endif // MAINWINDOW_H
