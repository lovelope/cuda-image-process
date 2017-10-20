/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openAction;
    QAction *openFolderAction;
    QAction *aboutAction;
    QAction *saveAction;
    QAction *exitAction;
    QAction *translateAction;
    QAction *scaleAction;
    QAction *mirrorAction;
    QAction *shearAction;
    QAction *rotateAction;
    QWidget *mainWidget;
    QTabWidget *argTabWidget;
    QWidget *translateTab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *transXTip;
    QLineEdit *transXVal;
    QHBoxLayout *horizontalLayout_2;
    QLabel *transYTip;
    QLineEdit *transYVal;
    QWidget *mirrorTab;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mirrorTip;
    QComboBox *mirDirectionVal;
    QWidget *shearTab;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *shearDirectionTip;
    QLabel *shearTip;
    QVBoxLayout *verticalLayout_5;
    QComboBox *shearDirectionVal;
    QLineEdit *shearVal;
    QWidget *scaleTab;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *scaleXTip;
    QLineEdit *scaleXVal;
    QHBoxLayout *horizontalLayout_7;
    QLabel *scaleYTip;
    QLineEdit *scaleYVal;
    QWidget *rotateTab;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *rotateTip;
    QLineEdit *rotateVal;
    QGroupBox *resultBox;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_11;
    QLabel *imgBefLabel;
    QLabel *imgAftLabel;
    QFrame *hLine1;
    QFrame *hLine2;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *startBtn;
    QMenuBar *menuBar;
    QMenu *File;
    QMenu *Operate;
    QMenu *Help;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(620, 436);
        MainWindow->setMinimumSize(QSize(620, 436));
        MainWindow->setMaximumSize(QSize(620, 436));
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QStringLiteral("openAction"));
        openAction->setCheckable(false);
        openAction->setChecked(false);
        openFolderAction = new QAction(MainWindow);
        openFolderAction->setObjectName(QStringLiteral("openFolderAction"));
        aboutAction = new QAction(MainWindow);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        translateAction = new QAction(MainWindow);
        translateAction->setObjectName(QStringLiteral("translateAction"));
        scaleAction = new QAction(MainWindow);
        scaleAction->setObjectName(QStringLiteral("scaleAction"));
        mirrorAction = new QAction(MainWindow);
        mirrorAction->setObjectName(QStringLiteral("mirrorAction"));
        shearAction = new QAction(MainWindow);
        shearAction->setObjectName(QStringLiteral("shearAction"));
        rotateAction = new QAction(MainWindow);
        rotateAction->setObjectName(QStringLiteral("rotateAction"));
        mainWidget = new QWidget(MainWindow);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        argTabWidget = new QTabWidget(mainWidget);
        argTabWidget->setObjectName(QStringLiteral("argTabWidget"));
        argTabWidget->setGeometry(QRect(10, 10, 600, 110));
        argTabWidget->setMinimumSize(QSize(600, 110));
        argTabWidget->setMaximumSize(QSize(600, 110));
        translateTab = new QWidget();
        translateTab->setObjectName(QStringLiteral("translateTab"));
        layoutWidget = new QWidget(translateTab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(86, 10, 391, 64));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        transXTip = new QLabel(layoutWidget);
        transXTip->setObjectName(QStringLiteral("transXTip"));

        horizontalLayout->addWidget(transXTip);

        transXVal = new QLineEdit(layoutWidget);
        transXVal->setObjectName(QStringLiteral("transXVal"));

        horizontalLayout->addWidget(transXVal);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        transYTip = new QLabel(layoutWidget);
        transYTip->setObjectName(QStringLiteral("transYTip"));

        horizontalLayout_2->addWidget(transYTip);

        transYVal = new QLineEdit(layoutWidget);
        transYVal->setObjectName(QStringLiteral("transYVal"));

        horizontalLayout_2->addWidget(transYVal);


        verticalLayout_2->addLayout(horizontalLayout_2);

        argTabWidget->addTab(translateTab, QString());
        mirrorTab = new QWidget();
        mirrorTab->setObjectName(QStringLiteral("mirrorTab"));
        layoutWidget1 = new QWidget(mirrorTab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 20, 311, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mirrorTip = new QLabel(layoutWidget1);
        mirrorTip->setObjectName(QStringLiteral("mirrorTip"));

        horizontalLayout_3->addWidget(mirrorTip);

        mirDirectionVal = new QComboBox(layoutWidget1);
        mirDirectionVal->setObjectName(QStringLiteral("mirDirectionVal"));

        horizontalLayout_3->addWidget(mirDirectionVal);

        argTabWidget->addTab(mirrorTab, QString());
        shearTab = new QWidget();
        shearTab->setObjectName(QStringLiteral("shearTab"));
        layoutWidget2 = new QWidget(shearTab);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 10, 344, 50));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        shearDirectionTip = new QLabel(layoutWidget2);
        shearDirectionTip->setObjectName(QStringLiteral("shearDirectionTip"));

        verticalLayout_3->addWidget(shearDirectionTip);

        shearTip = new QLabel(layoutWidget2);
        shearTip->setObjectName(QStringLiteral("shearTip"));

        verticalLayout_3->addWidget(shearTip);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        shearDirectionVal = new QComboBox(layoutWidget2);
        shearDirectionVal->setObjectName(QStringLiteral("shearDirectionVal"));

        verticalLayout_5->addWidget(shearDirectionVal);

        shearVal = new QLineEdit(layoutWidget2);
        shearVal->setObjectName(QStringLiteral("shearVal"));

        verticalLayout_5->addWidget(shearVal);


        horizontalLayout_4->addLayout(verticalLayout_5);

        argTabWidget->addTab(shearTab, QString());
        scaleTab = new QWidget();
        scaleTab->setObjectName(QStringLiteral("scaleTab"));
        layoutWidget3 = new QWidget(scaleTab);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(84, 10, 391, 64));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        scaleXTip = new QLabel(layoutWidget3);
        scaleXTip->setObjectName(QStringLiteral("scaleXTip"));

        horizontalLayout_6->addWidget(scaleXTip);

        scaleXVal = new QLineEdit(layoutWidget3);
        scaleXVal->setObjectName(QStringLiteral("scaleXVal"));

        horizontalLayout_6->addWidget(scaleXVal);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        scaleYTip = new QLabel(layoutWidget3);
        scaleYTip->setObjectName(QStringLiteral("scaleYTip"));

        horizontalLayout_7->addWidget(scaleYTip);

        scaleYVal = new QLineEdit(layoutWidget3);
        scaleYVal->setObjectName(QStringLiteral("scaleYVal"));

        horizontalLayout_7->addWidget(scaleYVal);


        verticalLayout_4->addLayout(horizontalLayout_7);

        argTabWidget->addTab(scaleTab, QString());
        rotateTab = new QWidget();
        rotateTab->setObjectName(QStringLiteral("rotateTab"));
        layoutWidget4 = new QWidget(rotateTab);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(90, 20, 393, 28));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        rotateTip = new QLabel(layoutWidget4);
        rotateTip->setObjectName(QStringLiteral("rotateTip"));

        horizontalLayout_8->addWidget(rotateTip);

        rotateVal = new QLineEdit(layoutWidget4);
        rotateVal->setObjectName(QStringLiteral("rotateVal"));

        horizontalLayout_8->addWidget(rotateVal);

        argTabWidget->addTab(rotateTab, QString());
        resultBox = new QGroupBox(mainWidget);
        resultBox->setObjectName(QStringLiteral("resultBox"));
        resultBox->setGeometry(QRect(10, 170, 600, 239));
        layoutWidget5 = new QWidget(resultBox);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(12, 16, 581, 211));
        verticalLayout = new QVBoxLayout(layoutWidget5);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label = new QLabel(layoutWidget5);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_10->addWidget(label);

        progressBar = new QProgressBar(layoutWidget5);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_10->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        imgBefLabel = new QLabel(layoutWidget5);
        imgBefLabel->setObjectName(QStringLiteral("imgBefLabel"));
        imgBefLabel->setMaximumSize(QSize(286, 16777215));
        imgBefLabel->setStyleSheet(QLatin1String("background-color: rgb(85, 170, 127);\n"
""));
        imgBefLabel->setScaledContents(true);
        imgBefLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(imgBefLabel);

        imgAftLabel = new QLabel(layoutWidget5);
        imgAftLabel->setObjectName(QStringLiteral("imgAftLabel"));
        imgAftLabel->setMaximumSize(QSize(285, 16777215));
        imgAftLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        imgAftLabel->setScaledContents(true);
        imgAftLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(imgAftLabel);


        verticalLayout->addLayout(horizontalLayout_11);

        hLine1 = new QFrame(mainWidget);
        hLine1->setObjectName(QStringLiteral("hLine1"));
        hLine1->setGeometry(QRect(10, 111, 601, 20));
        hLine1->setFrameShape(QFrame::HLine);
        hLine1->setFrameShadow(QFrame::Sunken);
        hLine2 = new QFrame(mainWidget);
        hLine2->setObjectName(QStringLiteral("hLine2"));
        hLine2->setGeometry(QRect(10, 160, 600, 16));
        hLine2->setFrameShape(QFrame::HLine);
        hLine2->setFrameShadow(QFrame::Sunken);
        layoutWidget6 = new QWidget(mainWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 130, 591, 28));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        startBtn = new QPushButton(layoutWidget6);
        startBtn->setObjectName(QStringLiteral("startBtn"));

        horizontalLayout_9->addWidget(startBtn);

        MainWindow->setCentralWidget(mainWidget);
        resultBox->raise();
        hLine1->raise();
        hLine2->raise();
        argTabWidget->raise();
        layoutWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 620, 23));
        File = new QMenu(menuBar);
        File->setObjectName(QStringLiteral("File"));
        Operate = new QMenu(menuBar);
        Operate->setObjectName(QStringLiteral("Operate"));
        Help = new QMenu(menuBar);
        Help->setObjectName(QStringLiteral("Help"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(File->menuAction());
        menuBar->addAction(Operate->menuAction());
        menuBar->addAction(Help->menuAction());
        File->addAction(openAction);
        File->addSeparator();
        File->addAction(exitAction);
        Operate->addAction(translateAction);
        Operate->addAction(mirrorAction);
        Operate->addAction(shearAction);
        Operate->addAction(scaleAction);
        Operate->addAction(rotateAction);
        Help->addAction(aboutAction);

        retranslateUi(MainWindow);

        argTabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\345\207\240\344\275\225\345\217\230\346\215\242", Q_NULLPTR));
        openAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        openAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        openFolderAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266\345\244\271", Q_NULLPTR));
        openFolderAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        aboutAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
        aboutAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", Q_NULLPTR));
        saveAction->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        saveAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        exitAction->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        exitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        translateAction->setText(QApplication::translate("MainWindow", "\345\271\263\347\247\273\345\217\230\346\215\242", Q_NULLPTR));
        scaleAction->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276\345\217\230\346\215\242", Q_NULLPTR));
        mirrorAction->setText(QApplication::translate("MainWindow", "\351\225\234\345\203\217\345\217\230\346\215\242", Q_NULLPTR));
        shearAction->setText(QApplication::translate("MainWindow", "\351\224\231\345\210\207\345\217\230\346\215\242", Q_NULLPTR));
        rotateAction->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254\345\217\230\346\215\242", Q_NULLPTR));
        transXTip->setText(QApplication::translate("MainWindow", "\346\250\252\345\220\221\345\271\263\347\247\273\351\207\217\357\274\210\345\220\221\345\217\263\344\270\272\346\255\243\357\274\214\345\220\221\345\267\246\344\270\272\350\264\237\357\274\214\345\217\226\346\225\264\346\225\260\357\274\214\345\215\225\344\275\215\345\203\217\347\264\240\357\274\211\357\274\232", Q_NULLPTR));
        transYTip->setText(QApplication::translate("MainWindow", "\347\272\265\345\220\221\345\271\263\347\247\273\351\207\217\357\274\210\345\220\221\344\270\212\344\270\272\346\255\243\357\274\214\345\220\221\344\270\213\344\270\272\350\264\237\357\274\214\345\217\226\346\225\264\346\225\260\357\274\214\345\215\225\344\275\215\345\203\217\347\264\240\357\274\211\357\274\232", Q_NULLPTR));
        argTabWidget->setTabText(argTabWidget->indexOf(translateTab), QApplication::translate("MainWindow", "\345\271\263\347\247\273\345\217\230\346\215\242", Q_NULLPTR));
        mirrorTip->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\351\225\234\345\203\217\346\226\271\345\220\221\357\274\232", Q_NULLPTR));
        mirDirectionVal->clear();
        mirDirectionVal->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\236\202\347\233\264\351\225\234\345\203\217\357\274\210X\350\275\264\344\270\272\347\277\273\350\275\254\350\275\264\357\274\211", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\260\264\345\271\263\351\225\234\345\203\217\357\274\210Y\350\275\264\344\270\272\347\277\273\350\275\254\350\275\264\357\274\211", Q_NULLPTR)
        );
        argTabWidget->setTabText(argTabWidget->indexOf(mirrorTab), QApplication::translate("MainWindow", "\351\225\234\345\203\217\345\217\230\346\215\242", Q_NULLPTR));
        shearDirectionTip->setText(QApplication::translate("MainWindow", "\351\224\231\345\210\207\346\226\271\345\220\221\357\274\232", Q_NULLPTR));
        shearTip->setText(QApplication::translate("MainWindow", "\351\224\231\345\210\207\351\207\217\357\274\210\345\217\257\345\217\226\346\255\243\346\225\264\346\225\260\357\274\214\345\215\225\344\275\215\345\203\217\347\264\240\357\274\211\357\274\232", Q_NULLPTR));
        shearDirectionVal->clear();
        shearDirectionVal->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\250\252\345\220\221\351\224\231\345\210\207\357\274\210\345\220\221\345\217\263\357\274\211", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\347\272\265\345\220\221\351\224\231\345\210\207\357\274\210\345\220\221\344\270\213\357\274\211", Q_NULLPTR)
        );
        argTabWidget->setTabText(argTabWidget->indexOf(shearTab), QApplication::translate("MainWindow", "\351\224\231\345\210\207\345\217\230\346\215\242", Q_NULLPTR));
        scaleXTip->setText(QApplication::translate("MainWindow", "X\350\275\264\347\274\251\346\224\276\351\207\217\357\274\210\345\217\230\351\225\277\345\244\247\344\272\2161\357\274\214\345\217\230\347\237\255\345\260\217\344\272\2161\357\274\214\345\217\226\346\255\243\345\256\236\346\225\260\357\274\214\345\215\225\344\275\215\345\200\215\357\274\211\357\274\232", Q_NULLPTR));
        scaleYTip->setText(QApplication::translate("MainWindow", "Y\350\275\264\347\274\251\346\224\276\351\207\217\357\274\210\345\217\230\351\225\277\345\244\247\344\272\2161\357\274\214\345\217\230\347\237\255\345\260\217\344\272\2161\357\274\214\345\217\226\346\255\243\345\256\236\346\225\260\357\274\214\345\215\225\344\275\215\345\200\215\357\274\211\357\274\232", Q_NULLPTR));
        argTabWidget->setTabText(argTabWidget->indexOf(scaleTab), QApplication::translate("MainWindow", "\347\274\251\346\224\276\345\217\230\346\215\242", Q_NULLPTR));
        rotateTip->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254\350\247\222\345\272\246\357\274\210\351\241\272\346\227\266\351\222\210\346\226\271\345\220\221\344\270\272\346\255\243\357\274\214\345\217\226\346\225\264\346\225\260\357\274\214\345\215\225\344\275\215\345\272\246\357\274\211\357\274\232", Q_NULLPTR));
        argTabWidget->setTabText(argTabWidget->indexOf(rotateTab), QApplication::translate("MainWindow", "\346\227\213\350\275\254\345\217\230\346\215\242", Q_NULLPTR));
        resultBox->setTitle(QApplication::translate("MainWindow", "\345\244\204\347\220\206\347\273\223\346\236\234", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\277\233\345\272\246:", Q_NULLPTR));
        imgBefLabel->setText(QApplication::translate("MainWindow", "\345\217\230\346\215\242\345\211\215\345\233\276\347\211\207", Q_NULLPTR));
        imgAftLabel->setText(QApplication::translate("MainWindow", "\345\217\230\346\215\242\345\220\216\345\233\276\347\211\207", Q_NULLPTR));
        startBtn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        File->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        Operate->setTitle(QApplication::translate("MainWindow", "\346\223\215\344\275\234", Q_NULLPTR));
        Help->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
