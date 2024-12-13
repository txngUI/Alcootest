#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onValidateClicked(); // Slot pour le bouton "Valider"

private:
    Ui::MainWindow *ui;
    double calculateAlcoholLevel(double beer, double wine, double aperitif, double weight, bool isMale); // Méthode de calcul
    void onClearClicked();
    void initStyle();
};

#endif // MAINWINDOW_H
