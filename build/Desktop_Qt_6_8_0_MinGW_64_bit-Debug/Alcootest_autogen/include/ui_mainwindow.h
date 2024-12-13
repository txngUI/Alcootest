/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QLabel *sex;
    QLabel *weight;
    QRadioButton *man;
    QRadioButton *woman;
    QPushButton *delete_2;
    QPushButton *check;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *other_quantity_input;
    QLabel *aperitif;
    QLabel *wine_percentage;
    QLabel *percentage;
    QLabel *quantity;
    QLineEdit *wine_input;
    QLineEdit *beer_input;
    QLabel *wine;
    QLabel *drink;
    QLabel *aperitif_percentage;
    QLabel *other;
    QLineEdit *aperitif_input;
    QLabel *beer_percentage;
    QLineEdit *other_percentage_input;
    QLabel *beer;
    QLabel *comsumption_label;
    QLineEdit *weight_input;
    QLabel *information;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(400, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(400, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(400, 600));
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(130, 10, 131, 20));
        sex = new QLabel(centralwidget);
        sex->setObjectName("sex");
        sex->setGeometry(QRect(40, 60, 63, 20));
        weight = new QLabel(centralwidget);
        weight->setObjectName("weight");
        weight->setGeometry(QRect(40, 120, 63, 20));
        man = new QRadioButton(centralwidget);
        man->setObjectName("man");
        man->setGeometry(QRect(110, 60, 112, 26));
        woman = new QRadioButton(centralwidget);
        woman->setObjectName("woman");
        woman->setGeometry(QRect(240, 60, 112, 26));
        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(100, 540, 83, 29));
        check = new QPushButton(centralwidget);
        check->setObjectName("check");
        check->setGeometry(QRect(210, 540, 83, 29));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(30, 180, 341, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        other_quantity_input = new QLineEdit(gridLayoutWidget);
        other_quantity_input->setObjectName("other_quantity_input");
        other_quantity_input->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(other_quantity_input, 5, 2, 1, 1);

        aperitif = new QLabel(gridLayoutWidget);
        aperitif->setObjectName("aperitif");
        aperitif->setMinimumSize(QSize(0, 50));
        aperitif->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(aperitif, 4, 0, 1, 1);

        wine_percentage = new QLabel(gridLayoutWidget);
        wine_percentage->setObjectName("wine_percentage");
        wine_percentage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(wine_percentage, 3, 1, 1, 1);

        percentage = new QLabel(gridLayoutWidget);
        percentage->setObjectName("percentage");
        percentage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(percentage, 1, 1, 1, 1);

        quantity = new QLabel(gridLayoutWidget);
        quantity->setObjectName("quantity");
        quantity->setMaximumSize(QSize(16777215, 50));
        quantity->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(quantity, 1, 2, 1, 1);

        wine_input = new QLineEdit(gridLayoutWidget);
        wine_input->setObjectName("wine_input");
        wine_input->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(wine_input, 3, 2, 1, 1);

        beer_input = new QLineEdit(gridLayoutWidget);
        beer_input->setObjectName("beer_input");
        beer_input->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(beer_input, 2, 2, 1, 1);

        wine = new QLabel(gridLayoutWidget);
        wine->setObjectName("wine");
        wine->setMinimumSize(QSize(0, 50));
        wine->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(wine, 3, 0, 1, 1);

        drink = new QLabel(gridLayoutWidget);
        drink->setObjectName("drink");
        drink->setMaximumSize(QSize(16777215, 50));
        drink->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(drink, 1, 0, 1, 1);

        aperitif_percentage = new QLabel(gridLayoutWidget);
        aperitif_percentage->setObjectName("aperitif_percentage");
        aperitif_percentage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(aperitif_percentage, 4, 1, 1, 1);

        other = new QLabel(gridLayoutWidget);
        other->setObjectName("other");
        other->setMinimumSize(QSize(0, 50));
        other->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(other, 5, 0, 1, 1);

        aperitif_input = new QLineEdit(gridLayoutWidget);
        aperitif_input->setObjectName("aperitif_input");
        aperitif_input->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(aperitif_input, 4, 2, 1, 1);

        beer_percentage = new QLabel(gridLayoutWidget);
        beer_percentage->setObjectName("beer_percentage");
        beer_percentage->setMaximumSize(QSize(16777215, 50));
        beer_percentage->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(beer_percentage, 2, 1, 1, 1);

        other_percentage_input = new QLineEdit(gridLayoutWidget);
        other_percentage_input->setObjectName("other_percentage_input");
        other_percentage_input->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(other_percentage_input, 5, 1, 1, 1);

        beer = new QLabel(gridLayoutWidget);
        beer->setObjectName("beer");
        beer->setMinimumSize(QSize(0, 50));
        beer->setMaximumSize(QSize(16777215, 50));
        beer->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(beer, 2, 0, 1, 1);

        comsumption_label = new QLabel(gridLayoutWidget);
        comsumption_label->setObjectName("comsumption_label");
        comsumption_label->setMinimumSize(QSize(50, 0));
        comsumption_label->setMaximumSize(QSize(500, 50));
        comsumption_label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        comsumption_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(comsumption_label, 0, 0, 1, 3);

        gridLayout->setColumnStretch(0, 5);
        weight_input = new QLineEdit(centralwidget);
        weight_input->setObjectName("weight_input");
        weight_input->setGeometry(QRect(110, 120, 113, 28));
        information = new QLabel(centralwidget);
        information->setObjectName("information");
        information->setGeometry(QRect(30, 500, 341, 20));
        information->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Calcul d'alcool\303\251mie", nullptr));
        sex->setText(QCoreApplication::translate("MainWindow", "Sexe", nullptr));
        weight->setText(QCoreApplication::translate("MainWindow", "Poids", nullptr));
        man->setText(QCoreApplication::translate("MainWindow", "Homme", nullptr));
        woman->setText(QCoreApplication::translate("MainWindow", "Femme", nullptr));
        delete_2->setText(QCoreApplication::translate("MainWindow", "Effacer", nullptr));
        check->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        aperitif->setText(QCoreApplication::translate("MainWindow", "Ap\303\251ritif", nullptr));
        wine_percentage->setText(QCoreApplication::translate("MainWindow", "12 \302\260", nullptr));
        percentage->setText(QCoreApplication::translate("MainWindow", "% en volume", nullptr));
        quantity->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251 en cl", nullptr));
        wine->setText(QCoreApplication::translate("MainWindow", "Vin", nullptr));
        drink->setText(QCoreApplication::translate("MainWindow", "Boisson", nullptr));
        aperitif_percentage->setText(QCoreApplication::translate("MainWindow", "35 \302\260", nullptr));
        other->setText(QCoreApplication::translate("MainWindow", "Autres", nullptr));
        beer_percentage->setText(QCoreApplication::translate("MainWindow", "5 \302\260", nullptr));
        beer->setText(QCoreApplication::translate("MainWindow", "Bi\303\250re", nullptr));
        comsumption_label->setText(QCoreApplication::translate("MainWindow", "Boissons consomm\303\251es", nullptr));
        information->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
