/********************************************************************************
** Form generated from reading UI file 'windows2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWS2_H
#define UI_WINDOWS2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windows2
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QListWidget *listWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *windows2)
    {
        if (windows2->objectName().isEmpty())
            windows2->setObjectName(QStringLiteral("windows2"));
        windows2->resize(640, 243);
        centralwidget = new QWidget(windows2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(39);
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QFont font1;
        font1.setPointSize(20);
        pushButton_5->setFont(font1);

        gridLayout->addWidget(pushButton_5, 2, 0, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setFont(font1);

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy3);
        listWidget->setTabKeyNavigation(false);

        gridLayout->addWidget(listWidget, 0, 1, 3, 1);


        horizontalLayout->addLayout(gridLayout);


        horizontalLayout_2->addWidget(frame);

        windows2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(windows2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        windows2->setStatusBar(statusbar);

        retranslateUi(windows2);

        QMetaObject::connectSlotsByName(windows2);
    } // setupUi

    void retranslateUi(QMainWindow *windows2)
    {
        windows2->setWindowTitle(QApplication::translate("windows2", "MainWindow", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("windows2", "\342\206\221", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("windows2", "\342\206\223", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("windows2", "cancl", Q_NULLPTR));
        pushButton->setText(QApplication::translate("windows2", "\342\206\221", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("windows2", "\342\206\223", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("windows2", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class windows2: public Ui_windows2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWS2_H
