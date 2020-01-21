/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(417, 336);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lcdNumber = new QLCDNumber(widget_2);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(18);
        sizePolicy1.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        lcdNumber->setFont(font);
        lcdNumber->setFrameShape(QFrame::Box);
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout->addWidget(lcdNumber);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(18);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);


        verticalLayout->addWidget(widget_2);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setPointSize(13);
        label_4->setFont(font2);

        verticalLayout->addWidget(label_4);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setPointSize(16);
        label->setFont(font3);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(widget);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\201 \321\201\321\202\320\260\320\261\320\270\320\273\320\265\320\275! 0 \321\202\320\276\320\266\320\265.", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\201\321\213 \320\262\320\272\320\273\321\216\321\207\320\265\320\275\321\213! \320\230\320\264\320\265\321\202 \320\267\320\260\320\277\320\270\321\201\321\214 \320\275\320\260 \320\256\320\241\320\221 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276.", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\241\321\207\320\265\321\202\321\207\320\270\320\272 : \320\235\320\276\320\274\320\265\321\200 \320\276\320\264\320\270\320\275 </p><p>\320\240\320\260\320\261\320\276\321\202\320\260\320\265\321\202 \321\205\320\276\321\200\320\276\321\210\320\276, \320\275\320\260\321\201\321\207\320\270\321\202\320\260\320\273 - 23232</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">F1</span>- \320\236\320\261\320\275\321\203\320\273\320\270\321\202\321\214 |<span style=\" font-weight:600; color:#204a87;\">F2</span>- \320\226\321\203\321\200\320\275\320\260\320\273 |<span style=\" font-weight:600; color:#204a87;\">F3</span>-\320\237\320\265\321\200\320\265\320\272\320\273\321\216\321\207\320\270\320\270\321\202\321\214 \321\201\321\207\320\265\321\202\321\207\320\270\320\272</p><p><span style=\" font-weight:600; color:#204a87;\">F4</span>-\320\247\321\202\320\276\321\202\320\276 \320\265\321\211\320\265 |<span style=\" font-weight:600; color:#204a87;\">F5</span>- \320\221\321\203\320\264\320\265\321\202 \320\262 \320\261\321\203\320\264\321\203\321\211\320\265\320\274 |<span style=\" font-weight:600; color:#204a87;\">F6</span>- \320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213</p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "f6", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
