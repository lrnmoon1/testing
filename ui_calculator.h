/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *button_5;
    QPushButton *button_multiply;
    QPushButton *button_divide;
    QPushButton *button_plus;
    QPushButton *button_decimal;
    QPushButton *button_4;
    QPushButton *button_6;
    QPushButton *button_equals;
    QPushButton *button_clear;
    QPushButton *button_9;
    QPushButton *button_tan;
    QPushButton *button_pos_neg;
    QPushButton *button_0;
    QPushButton *button_3;
    QPushButton *button_percent;
    QPushButton *button_integral;
    QPushButton *button_2;
    QPushButton *button_8;
    QPushButton *button_sin;
    QPushButton *button_derivatives;
    QPushButton *button_1;
    QPushButton *button_7;
    QPushButton *button_minus;
    QPushButton *button_cos;
    QPushButton *button_factorial;
    QPushButton *button_sqroot;
    QPushButton *button_x_y_power;
    QPushButton *button_xsquared;
    QPushButton *button_x;
    QTextEdit *results_display;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(367, 319);
        Calculator->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        button_5 = new QPushButton(centralwidget);
        button_5->setObjectName(QStringLiteral("button_5"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_5, 4, 4, 1, 1);

        button_multiply = new QPushButton(centralwidget);
        button_multiply->setObjectName(QStringLiteral("button_multiply"));
        sizePolicy.setHeightForWidth(button_multiply->sizePolicy().hasHeightForWidth());
        button_multiply->setSizePolicy(sizePolicy);
        button_multiply->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_multiply, 3, 6, 1, 1);

        button_divide = new QPushButton(centralwidget);
        button_divide->setObjectName(QStringLiteral("button_divide"));
        sizePolicy.setHeightForWidth(button_divide->sizePolicy().hasHeightForWidth());
        button_divide->setSizePolicy(sizePolicy);
        button_divide->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_divide, 2, 6, 1, 1);

        button_plus = new QPushButton(centralwidget);
        button_plus->setObjectName(QStringLiteral("button_plus"));
        sizePolicy.setHeightForWidth(button_plus->sizePolicy().hasHeightForWidth());
        button_plus->setSizePolicy(sizePolicy);
        button_plus->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_plus, 4, 6, 1, 1);

        button_decimal = new QPushButton(centralwidget);
        button_decimal->setObjectName(QStringLiteral("button_decimal"));
        sizePolicy.setHeightForWidth(button_decimal->sizePolicy().hasHeightForWidth());
        button_decimal->setSizePolicy(sizePolicy);
        button_decimal->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_decimal, 6, 5, 1, 1);

        button_4 = new QPushButton(centralwidget);
        button_4->setObjectName(QStringLiteral("button_4"));
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_4, 4, 3, 1, 1);

        button_6 = new QPushButton(centralwidget);
        button_6->setObjectName(QStringLiteral("button_6"));
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_6, 4, 5, 1, 1);

        button_equals = new QPushButton(centralwidget);
        button_equals->setObjectName(QStringLiteral("button_equals"));
        sizePolicy.setHeightForWidth(button_equals->sizePolicy().hasHeightForWidth());
        button_equals->setSizePolicy(sizePolicy);
        button_equals->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_equals, 6, 6, 1, 1);

        button_clear = new QPushButton(centralwidget);
        button_clear->setObjectName(QStringLiteral("button_clear"));
        sizePolicy.setHeightForWidth(button_clear->sizePolicy().hasHeightForWidth());
        button_clear->setSizePolicy(sizePolicy);
        button_clear->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_clear, 2, 3, 1, 1);

        button_9 = new QPushButton(centralwidget);
        button_9->setObjectName(QStringLiteral("button_9"));
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_9, 3, 5, 1, 1);

        button_tan = new QPushButton(centralwidget);
        button_tan->setObjectName(QStringLiteral("button_tan"));
        sizePolicy.setHeightForWidth(button_tan->sizePolicy().hasHeightForWidth());
        button_tan->setSizePolicy(sizePolicy);
        button_tan->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_tan, 4, 2, 1, 1);

        button_pos_neg = new QPushButton(centralwidget);
        button_pos_neg->setObjectName(QStringLiteral("button_pos_neg"));
        sizePolicy.setHeightForWidth(button_pos_neg->sizePolicy().hasHeightForWidth());
        button_pos_neg->setSizePolicy(sizePolicy);
        button_pos_neg->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_pos_neg, 2, 4, 1, 1);

        button_0 = new QPushButton(centralwidget);
        button_0->setObjectName(QStringLiteral("button_0"));
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setMinimumSize(QSize(20, 10));

        gridLayout->addWidget(button_0, 6, 3, 1, 2);

        button_3 = new QPushButton(centralwidget);
        button_3->setObjectName(QStringLiteral("button_3"));
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_3, 5, 5, 1, 1);

        button_percent = new QPushButton(centralwidget);
        button_percent->setObjectName(QStringLiteral("button_percent"));
        sizePolicy.setHeightForWidth(button_percent->sizePolicy().hasHeightForWidth());
        button_percent->setSizePolicy(sizePolicy);
        button_percent->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_percent, 2, 5, 1, 1);

        button_integral = new QPushButton(centralwidget);
        button_integral->setObjectName(QStringLiteral("button_integral"));
        sizePolicy.setHeightForWidth(button_integral->sizePolicy().hasHeightForWidth());
        button_integral->setSizePolicy(sizePolicy);
        button_integral->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_integral, 6, 2, 1, 1);

        button_2 = new QPushButton(centralwidget);
        button_2->setObjectName(QStringLiteral("button_2"));
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_2, 5, 4, 1, 1);

        button_8 = new QPushButton(centralwidget);
        button_8->setObjectName(QStringLiteral("button_8"));
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_8, 3, 4, 1, 1);

        button_sin = new QPushButton(centralwidget);
        button_sin->setObjectName(QStringLiteral("button_sin"));
        sizePolicy.setHeightForWidth(button_sin->sizePolicy().hasHeightForWidth());
        button_sin->setSizePolicy(sizePolicy);
        button_sin->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_sin, 2, 2, 1, 1);

        button_derivatives = new QPushButton(centralwidget);
        button_derivatives->setObjectName(QStringLiteral("button_derivatives"));
        sizePolicy.setHeightForWidth(button_derivatives->sizePolicy().hasHeightForWidth());
        button_derivatives->setSizePolicy(sizePolicy);
        button_derivatives->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_derivatives, 5, 2, 1, 1);

        button_1 = new QPushButton(centralwidget);
        button_1->setObjectName(QStringLiteral("button_1"));
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        button_1->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_1, 5, 3, 1, 1);

        button_7 = new QPushButton(centralwidget);
        button_7->setObjectName(QStringLiteral("button_7"));
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        button_7->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_7, 3, 3, 1, 1);

        button_minus = new QPushButton(centralwidget);
        button_minus->setObjectName(QStringLiteral("button_minus"));
        sizePolicy.setHeightForWidth(button_minus->sizePolicy().hasHeightForWidth());
        button_minus->setSizePolicy(sizePolicy);
        button_minus->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_minus, 5, 6, 1, 1);

        button_cos = new QPushButton(centralwidget);
        button_cos->setObjectName(QStringLiteral("button_cos"));
        sizePolicy.setHeightForWidth(button_cos->sizePolicy().hasHeightForWidth());
        button_cos->setSizePolicy(sizePolicy);
        button_cos->setMinimumSize(QSize(10, 10));

        gridLayout->addWidget(button_cos, 3, 2, 1, 1);

        button_factorial = new QPushButton(centralwidget);
        button_factorial->setObjectName(QStringLiteral("button_factorial"));
        sizePolicy.setHeightForWidth(button_factorial->sizePolicy().hasHeightForWidth());
        button_factorial->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_factorial, 2, 1, 1, 1);

        button_sqroot = new QPushButton(centralwidget);
        button_sqroot->setObjectName(QStringLiteral("button_sqroot"));
        sizePolicy.setHeightForWidth(button_sqroot->sizePolicy().hasHeightForWidth());
        button_sqroot->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_sqroot, 3, 1, 1, 1);

        button_x_y_power = new QPushButton(centralwidget);
        button_x_y_power->setObjectName(QStringLiteral("button_x_y_power"));
        sizePolicy.setHeightForWidth(button_x_y_power->sizePolicy().hasHeightForWidth());
        button_x_y_power->setSizePolicy(sizePolicy);
        button_x_y_power->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(button_x_y_power, 4, 1, 1, 1);

        button_xsquared = new QPushButton(centralwidget);
        button_xsquared->setObjectName(QStringLiteral("button_xsquared"));
        sizePolicy.setHeightForWidth(button_xsquared->sizePolicy().hasHeightForWidth());
        button_xsquared->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_xsquared, 5, 1, 1, 1);

        button_x = new QPushButton(centralwidget);
        button_x->setObjectName(QStringLiteral("button_x"));
        sizePolicy.setHeightForWidth(button_x->sizePolicy().hasHeightForWidth());
        button_x->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_x, 6, 1, 1, 1);

        results_display = new QTextEdit(centralwidget);
        results_display->setObjectName(QStringLiteral("results_display"));
        results_display->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QStringLiteral(".AppleSystemUIFont"));
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        results_display->setFont(font);
        results_display->setLayoutDirection(Qt::LeftToRight);
        results_display->setStyleSheet(QLatin1String("QTextEdit{\n"
"background-color: white;\n"
"border-color: rgb(255,255,255);\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-radius: 9px;\n"
"padding: 2px;\n"
"}"));
        results_display->setInputMethodHints(Qt::ImhNone);
        results_display->setReadOnly(true);
        results_display->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(results_display, 1, 1, 1, 6);

        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", Q_NULLPTR));
        button_5->setText(QApplication::translate("Calculator", "5", Q_NULLPTR));
        button_multiply->setText(QApplication::translate("Calculator", "x", Q_NULLPTR));
        button_divide->setText(QApplication::translate("Calculator", "/", Q_NULLPTR));
        button_plus->setText(QApplication::translate("Calculator", "+", Q_NULLPTR));
        button_decimal->setText(QApplication::translate("Calculator", ".", Q_NULLPTR));
        button_4->setText(QApplication::translate("Calculator", "4", Q_NULLPTR));
        button_6->setText(QApplication::translate("Calculator", "6", Q_NULLPTR));
        button_equals->setText(QApplication::translate("Calculator", "=", Q_NULLPTR));
        button_clear->setText(QApplication::translate("Calculator", "c", Q_NULLPTR));
        button_9->setText(QApplication::translate("Calculator", "9", Q_NULLPTR));
        button_tan->setText(QApplication::translate("Calculator", "tan", Q_NULLPTR));
        button_pos_neg->setText(QApplication::translate("Calculator", "+/-", Q_NULLPTR));
        button_0->setText(QApplication::translate("Calculator", "0", Q_NULLPTR));
        button_3->setText(QApplication::translate("Calculator", "3", Q_NULLPTR));
        button_percent->setText(QApplication::translate("Calculator", "%", Q_NULLPTR));
        button_integral->setText(QApplication::translate("Calculator", "\342\210\253", Q_NULLPTR));
        button_2->setText(QApplication::translate("Calculator", "2", Q_NULLPTR));
        button_8->setText(QApplication::translate("Calculator", "8", Q_NULLPTR));
        button_sin->setText(QApplication::translate("Calculator", "sin", Q_NULLPTR));
        button_derivatives->setText(QApplication::translate("Calculator", "der", Q_NULLPTR));
        button_1->setText(QApplication::translate("Calculator", "1", Q_NULLPTR));
        button_7->setText(QApplication::translate("Calculator", "7", Q_NULLPTR));
        button_minus->setText(QApplication::translate("Calculator", "-", Q_NULLPTR));
        button_cos->setText(QApplication::translate("Calculator", "cos", Q_NULLPTR));
        button_factorial->setText(QApplication::translate("Calculator", "x!", Q_NULLPTR));
        button_sqroot->setText(QApplication::translate("Calculator", "\342\210\232x", Q_NULLPTR));
        button_x_y_power->setText(QApplication::translate("Calculator", "x^y", Q_NULLPTR));
        button_xsquared->setText(QApplication::translate("Calculator", "x^2", Q_NULLPTR));
        button_x->setText(QApplication::translate("Calculator", "x", Q_NULLPTR));
        results_display->setHtml(QApplication::translate("Calculator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt;\"><br /></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
