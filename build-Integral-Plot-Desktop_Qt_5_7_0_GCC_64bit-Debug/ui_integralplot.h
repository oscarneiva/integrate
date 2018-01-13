/********************************************************************************
** Form generated from reading UI file 'integralplot.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGRALPLOT_H
#define UI_INTEGRALPLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntegralPlot
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *labelTitle;
    QLabel *labelX;
    QLabel *labelY;

    void setupUi(QMainWindow *IntegralPlot)
    {
        if (IntegralPlot->objectName().isEmpty())
            IntegralPlot->setObjectName(QStringLiteral("IntegralPlot"));
        IntegralPlot->resize(674, 360);
        centralWidget = new QWidget(IntegralPlot);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(260, 60, 401, 261));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 210, 80, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 140, 121, 23));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 170, 121, 23));
        labelTitle = new QLabel(centralWidget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setGeometry(QRect(240, 10, 201, 41));
        labelX = new QLabel(centralWidget);
        labelX->setObjectName(QStringLiteral("labelX"));
        labelX->setGeometry(QRect(50, 140, 16, 21));
        labelY = new QLabel(centralWidget);
        labelY->setObjectName(QStringLiteral("labelY"));
        labelY->setGeometry(QRect(50, 170, 16, 21));
        IntegralPlot->setCentralWidget(centralWidget);

        retranslateUi(IntegralPlot);

        QMetaObject::connectSlotsByName(IntegralPlot);
    } // setupUi

    void retranslateUi(QMainWindow *IntegralPlot)
    {
        IntegralPlot->setWindowTitle(QApplication::translate("IntegralPlot", "IntegralPlot", 0));
        pushButton->setText(QApplication::translate("IntegralPlot", "Get Values", 0));
        labelTitle->setText(QApplication::translate("IntegralPlot", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">Integral Plot</span></p></body></html>", 0));
        labelX->setText(QApplication::translate("IntegralPlot", "<html><head/><body><p><span style=\" font-size:14pt;\">X</span></p></body></html>", 0));
        labelY->setText(QApplication::translate("IntegralPlot", "<html><head/><body><p><span style=\" font-size:14pt;\">Y</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class IntegralPlot: public Ui_IntegralPlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGRALPLOT_H
