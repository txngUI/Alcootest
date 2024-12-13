#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox> // Pour afficher les messages
#include <QDebug> // Pour afficher des logs dans la console

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initStyle();

    // Connecter le bouton "Valider" à la méthode onValidateClicked
    connect(ui->check, &QPushButton::clicked, this, &MainWindow::onValidateClicked);

    connect(ui->delete_2, &QPushButton::clicked, this, &MainWindow::onClearClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onValidateClicked()
{
    // Récupérer les valeurs saisies
    double beer = ui->beer_input->text().toDouble();         // Quantité de bière en cl
    double wine = ui->wine_input->text().toDouble();         // Quantité de vin en cl
    double aperitif = ui->aperitif_input->text().toDouble(); // Quantité d'apéritif en cl
    double weight = ui->weight_input->text().toDouble();     // Poids en kg

    // Déterminer le sexe
    bool isMale = ui->man->isChecked(); // Vrai si "Homme" est sélectionné
    bool isFemale = ui->woman->isChecked(); // Vrai si "Femme est séléctionné

    if (!isMale && !isFemale) {
        ui->information->setText("Veuillez saisir votre sexe.");
        return;
    }

    // Vérifier que les champs obligatoires sont remplis
    if (weight <= 0) {
        ui->information->setText("Veuillez entrer un poids valide !");
        return;
    }

    // Calculer l'alcoolémie
    double alcoholLevel = calculateAlcoholLevel(beer, wine, aperitif, weight, isMale);

    ui->information->setText("Votre alcoolemie est de : " + QString::number(alcoholLevel, 'f', 2) + " g/L");

    if (alcoholLevel < 0.5) {
        ui->information->setStyleSheet("background-color: green; color: white;");
        ui->information->setText(ui->information->text() + " : Ok ");
    } else{
        ui->information->setStyleSheet("background-color: red; color: black;");
        ui->information->setText(ui->information->text() + " : Pas ok ");
    }
}

double MainWindow::calculateAlcoholLevel(double beer, double wine, double aperitif, double weight, bool isMale)
{
    // Facteurs d'alcool (en % d'alcool pur par volume)
    double beerFactor = 0.05;      // Bière : 5%
    double wineFactor = 0.12;      // Vin : 12%
    double aperitifFactor = 0.35;  // Apéritif : 35%


    // Calcul de l'alcool pur ingéré (en grammes)
    double alcoholInGrams = (beerFactor * beer / 100) + (wineFactor * wine / 100) + (aperitifFactor * aperitif / 100);

    if (ui->other->text().isEmpty() == false) {
        alcoholInGrams += (ui->other_percentage_input->text().toDouble() * ui->other_quantity_input->text().toDouble() / 100);
    }

    // Facteur de réduction (en fonction du sexe)
    double reductionFactor = isMale ? 11 : 12;

    // Calcul de l'alcoolémie
    return alcoholInGrams * reductionFactor / weight;
}

void MainWindow::onClearClicked()
{
    ui->beer_input->clear();
    ui->wine_input->clear();
    ui->aperitif_input->clear();
    ui->weight_input->clear();
    ui->man->setChecked(false);
    ui->woman->setChecked(false);
    ui->information->setText("");
    ui->information->setStyleSheet("");
    ui->other_percentage_input->setText("");
    ui->other_quantity_input->setText("");
}

void MainWindow::initStyle() {
    ui->comsumption_label->setStyleSheet("border: 1px solid black; background-color: #204AAA;");
    ui->drink->setStyleSheet("border: 1px solid black; background-color: #2657C9;");
    ui->percentage->setStyleSheet("border: 1px solid black; background-color: #2657C9;");
    ui->quantity->setStyleSheet("border: 1px solid black; background-color: #2657C9;");
    ui->beer->setStyleSheet("border: 1px solid black; background-color: #2657C9;");
    ui->wine->setStyleSheet("border: 1px solid black; background-color: #2657C9;");
    ui->aperitif->setStyleSheet("border: 1px solid black; background-color: #2657C9;");
    ui->other->setStyleSheet("border: 1px solid black; background-color: #2657C9;");
    ui->beer_percentage->setStyleSheet("border: 1px solid black; background-color: #A3D9FE; color: black;");
    ui->wine_percentage->setStyleSheet("border: 1px solid black; background-color: #A3D9FE; color: black;");
    ui->aperitif_percentage->setStyleSheet("border: 1px solid black; background-color: #A3D9FE; color: black;");
    ui->beer_input->setStyleSheet("border: 1px solid black; background-color: white;border-radius: 0px;");
    ui->wine_input->setStyleSheet("border: 1px solid black; background-color: white;border-radius: 0px;");
    ui->aperitif_input->setStyleSheet("border: 1px solid black; background-color: white;border-radius: 0px;");
    ui->other_percentage_input->setStyleSheet("border: 1px solid black; background-color: white;border-radius: 0px; color: black;");
    ui->other_quantity_input->setStyleSheet("border: 1px solid black; background-color: white;border-radius: 0px;");
    ui->weight_input->setStyleSheet("background-color: white;border-radius: 0px;");
}
