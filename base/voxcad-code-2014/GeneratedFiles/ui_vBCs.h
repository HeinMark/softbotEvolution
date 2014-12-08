/********************************************************************************
** Form generated from reading UI file 'vBCs.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VBCS_H
#define UI_VBCS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BCDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *BCPresetsCombo;
    QLabel *PresetLabel;
    QFrame *line;
    QLabel *BCLabel;
    QListWidget *BCList;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *AddBCButton;
    QPushButton *DelBCButton;
    QPushButton *LoadBCButton;
    QPushButton *SaveBCButton;
    QSpacerItem *horizontalSpacer;
    QTabWidget *BCTabWidget;
    QWidget *ModeTab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *FixAllButton;
    QPushButton *FixNoneButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *TranslationGroup;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *XLabel;
    QCheckBox *XFixed;
    QLineEdit *XForceEdit;
    QLineEdit *XDispEdit;
    QLabel *YLabel;
    QCheckBox *YFixed;
    QLineEdit *YForceEdit;
    QLineEdit *YDispEdit;
    QLabel *ZLabel;
    QCheckBox *ZFixed;
    QLineEdit *ZForceEdit;
    QLineEdit *ZDispEdit;
    QGroupBox *RotationGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *TXLabel;
    QCheckBox *TXFixed;
    QLineEdit *TXTorqueEdit;
    QLineEdit *TXDispEdit;
    QLabel *TYLabel;
    QCheckBox *TYFixed;
    QLineEdit *TYTorqueEdit;
    QLineEdit *TYDispEdit;
    QLabel *TZLabel;
    QCheckBox *TZFixed;
    QLineEdit *TZTorqueEdit;
    QLineEdit *TZDispEdit;
    QSpacerItem *verticalSpacer;
    QWidget *ShapeTab;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *ShapeScrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *BCDonePushButton;

    void setupUi(QWidget *BCDlg)
    {
        if (BCDlg->objectName().isEmpty())
            BCDlg->setObjectName(QStringLiteral("BCDlg"));
        BCDlg->resize(200, 620);
        verticalLayout_3 = new QVBoxLayout(BCDlg);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        BCPresetsCombo = new QComboBox(BCDlg);
        BCPresetsCombo->setObjectName(QStringLiteral("BCPresetsCombo"));

        horizontalLayout_6->addWidget(BCPresetsCombo);

        PresetLabel = new QLabel(BCDlg);
        PresetLabel->setObjectName(QStringLiteral("PresetLabel"));

        horizontalLayout_6->addWidget(PresetLabel);


        verticalLayout_3->addLayout(horizontalLayout_6);

        line = new QFrame(BCDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        BCLabel = new QLabel(BCDlg);
        BCLabel->setObjectName(QStringLiteral("BCLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BCLabel->sizePolicy().hasHeightForWidth());
        BCLabel->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(BCLabel);

        BCList = new QListWidget(BCDlg);
        BCList->setObjectName(QStringLiteral("BCList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BCList->sizePolicy().hasHeightForWidth());
        BCList->setSizePolicy(sizePolicy1);
        BCList->setMaximumSize(QSize(16777215, 100));

        verticalLayout_3->addWidget(BCList);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        AddBCButton = new QPushButton(BCDlg);
        AddBCButton->setObjectName(QStringLiteral("AddBCButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(AddBCButton->sizePolicy().hasHeightForWidth());
        AddBCButton->setSizePolicy(sizePolicy2);
        AddBCButton->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(AddBCButton);

        DelBCButton = new QPushButton(BCDlg);
        DelBCButton->setObjectName(QStringLiteral("DelBCButton"));
        DelBCButton->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(DelBCButton);

        LoadBCButton = new QPushButton(BCDlg);
        LoadBCButton->setObjectName(QStringLiteral("LoadBCButton"));
        LoadBCButton->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_5->addWidget(LoadBCButton);

        SaveBCButton = new QPushButton(BCDlg);
        SaveBCButton->setObjectName(QStringLiteral("SaveBCButton"));
        SaveBCButton->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_5->addWidget(SaveBCButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_5);

        BCTabWidget = new QTabWidget(BCDlg);
        BCTabWidget->setObjectName(QStringLiteral("BCTabWidget"));
        sizePolicy1.setHeightForWidth(BCTabWidget->sizePolicy().hasHeightForWidth());
        BCTabWidget->setSizePolicy(sizePolicy1);
        ModeTab = new QWidget();
        ModeTab->setObjectName(QStringLiteral("ModeTab"));
        verticalLayout = new QVBoxLayout(ModeTab);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        FixAllButton = new QPushButton(ModeTab);
        FixAllButton->setObjectName(QStringLiteral("FixAllButton"));

        horizontalLayout->addWidget(FixAllButton);

        FixNoneButton = new QPushButton(ModeTab);
        FixNoneButton->setObjectName(QStringLiteral("FixNoneButton"));

        horizontalLayout->addWidget(FixNoneButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        TranslationGroup = new QGroupBox(ModeTab);
        TranslationGroup->setObjectName(QStringLiteral("TranslationGroup"));
        gridLayout = new QGridLayout(TranslationGroup);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(TranslationGroup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label = new QLabel(TranslationGroup);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        label_2 = new QLabel(TranslationGroup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        XLabel = new QLabel(TranslationGroup);
        XLabel->setObjectName(QStringLiteral("XLabel"));

        gridLayout->addWidget(XLabel, 1, 0, 1, 1);

        XFixed = new QCheckBox(TranslationGroup);
        XFixed->setObjectName(QStringLiteral("XFixed"));

        gridLayout->addWidget(XFixed, 1, 1, 1, 1);

        XForceEdit = new QLineEdit(TranslationGroup);
        XForceEdit->setObjectName(QStringLiteral("XForceEdit"));

        gridLayout->addWidget(XForceEdit, 1, 2, 1, 1);

        XDispEdit = new QLineEdit(TranslationGroup);
        XDispEdit->setObjectName(QStringLiteral("XDispEdit"));

        gridLayout->addWidget(XDispEdit, 1, 3, 1, 1);

        YLabel = new QLabel(TranslationGroup);
        YLabel->setObjectName(QStringLiteral("YLabel"));

        gridLayout->addWidget(YLabel, 2, 0, 1, 1);

        YFixed = new QCheckBox(TranslationGroup);
        YFixed->setObjectName(QStringLiteral("YFixed"));

        gridLayout->addWidget(YFixed, 2, 1, 1, 1);

        YForceEdit = new QLineEdit(TranslationGroup);
        YForceEdit->setObjectName(QStringLiteral("YForceEdit"));

        gridLayout->addWidget(YForceEdit, 2, 2, 1, 1);

        YDispEdit = new QLineEdit(TranslationGroup);
        YDispEdit->setObjectName(QStringLiteral("YDispEdit"));

        gridLayout->addWidget(YDispEdit, 2, 3, 1, 1);

        ZLabel = new QLabel(TranslationGroup);
        ZLabel->setObjectName(QStringLiteral("ZLabel"));

        gridLayout->addWidget(ZLabel, 3, 0, 1, 1);

        ZFixed = new QCheckBox(TranslationGroup);
        ZFixed->setObjectName(QStringLiteral("ZFixed"));

        gridLayout->addWidget(ZFixed, 3, 1, 1, 1);

        ZForceEdit = new QLineEdit(TranslationGroup);
        ZForceEdit->setObjectName(QStringLiteral("ZForceEdit"));

        gridLayout->addWidget(ZForceEdit, 3, 2, 1, 1);

        ZDispEdit = new QLineEdit(TranslationGroup);
        ZDispEdit->setObjectName(QStringLiteral("ZDispEdit"));

        gridLayout->addWidget(ZDispEdit, 3, 3, 1, 1);


        verticalLayout->addWidget(TranslationGroup);

        RotationGroup = new QGroupBox(ModeTab);
        RotationGroup->setObjectName(QStringLiteral("RotationGroup"));
        gridLayout_2 = new QGridLayout(RotationGroup);
        gridLayout_2->setSpacing(3);
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(RotationGroup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(RotationGroup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 2, 1, 1);

        label_6 = new QLabel(RotationGroup);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 3, 1, 1);

        TXLabel = new QLabel(RotationGroup);
        TXLabel->setObjectName(QStringLiteral("TXLabel"));

        gridLayout_2->addWidget(TXLabel, 1, 0, 1, 1);

        TXFixed = new QCheckBox(RotationGroup);
        TXFixed->setObjectName(QStringLiteral("TXFixed"));

        gridLayout_2->addWidget(TXFixed, 1, 1, 1, 1);

        TXTorqueEdit = new QLineEdit(RotationGroup);
        TXTorqueEdit->setObjectName(QStringLiteral("TXTorqueEdit"));

        gridLayout_2->addWidget(TXTorqueEdit, 1, 2, 1, 1);

        TXDispEdit = new QLineEdit(RotationGroup);
        TXDispEdit->setObjectName(QStringLiteral("TXDispEdit"));

        gridLayout_2->addWidget(TXDispEdit, 1, 3, 1, 1);

        TYLabel = new QLabel(RotationGroup);
        TYLabel->setObjectName(QStringLiteral("TYLabel"));

        gridLayout_2->addWidget(TYLabel, 2, 0, 1, 1);

        TYFixed = new QCheckBox(RotationGroup);
        TYFixed->setObjectName(QStringLiteral("TYFixed"));

        gridLayout_2->addWidget(TYFixed, 2, 1, 1, 1);

        TYTorqueEdit = new QLineEdit(RotationGroup);
        TYTorqueEdit->setObjectName(QStringLiteral("TYTorqueEdit"));

        gridLayout_2->addWidget(TYTorqueEdit, 2, 2, 1, 1);

        TYDispEdit = new QLineEdit(RotationGroup);
        TYDispEdit->setObjectName(QStringLiteral("TYDispEdit"));

        gridLayout_2->addWidget(TYDispEdit, 2, 3, 1, 1);

        TZLabel = new QLabel(RotationGroup);
        TZLabel->setObjectName(QStringLiteral("TZLabel"));

        gridLayout_2->addWidget(TZLabel, 3, 0, 1, 1);

        TZFixed = new QCheckBox(RotationGroup);
        TZFixed->setObjectName(QStringLiteral("TZFixed"));

        gridLayout_2->addWidget(TZFixed, 3, 1, 1, 1);

        TZTorqueEdit = new QLineEdit(RotationGroup);
        TZTorqueEdit->setObjectName(QStringLiteral("TZTorqueEdit"));

        gridLayout_2->addWidget(TZTorqueEdit, 3, 2, 1, 1);

        TZDispEdit = new QLineEdit(RotationGroup);
        TZDispEdit->setObjectName(QStringLiteral("TZDispEdit"));

        gridLayout_2->addWidget(TZDispEdit, 3, 3, 1, 1);


        verticalLayout->addWidget(RotationGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        BCTabWidget->addTab(ModeTab, QString());
        ShapeTab = new QWidget();
        ShapeTab->setObjectName(QStringLiteral("ShapeTab"));
        verticalLayout_2 = new QVBoxLayout(ShapeTab);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ShapeScrollArea = new QScrollArea(ShapeTab);
        ShapeScrollArea->setObjectName(QStringLiteral("ShapeScrollArea"));
        ShapeScrollArea->setFrameShape(QFrame::NoFrame);
        ShapeScrollArea->setFrameShadow(QFrame::Plain);
        ShapeScrollArea->setLineWidth(0);
        ShapeScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        ShapeScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 176, 354));
        ShapeScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(ShapeScrollArea);

        BCTabWidget->addTab(ShapeTab, QString());

        verticalLayout_3->addWidget(BCTabWidget);

        BCDonePushButton = new QPushButton(BCDlg);
        BCDonePushButton->setObjectName(QStringLiteral("BCDonePushButton"));

        verticalLayout_3->addWidget(BCDonePushButton);


        retranslateUi(BCDlg);

        BCTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BCDlg);
    } // setupUi

    void retranslateUi(QWidget *BCDlg)
    {
        BCDlg->setWindowTitle(QApplication::translate("BCDlg", "Boundary Condition Editor", 0));
        PresetLabel->setText(QApplication::translate("BCDlg", "Presets", 0));
#ifndef QT_NO_TOOLTIP
        BCLabel->setToolTip(QApplication::translate("BCDlg", "(X Y Z \316\230x \316\230y \316\230z) * = fixed, _ = free", 0));
#endif // QT_NO_TOOLTIP
        BCLabel->setText(QApplication::translate("BCDlg", "Boundary Conditions:", 0));
#ifndef QT_NO_TOOLTIP
        BCList->setToolTip(QApplication::translate("BCDlg", "(X Y Z \316\230x \316\230y \316\230z) * = fixed, _ = free", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        AddBCButton->setToolTip(QApplication::translate("BCDlg", "Adds new boundary condition", 0));
#endif // QT_NO_TOOLTIP
        AddBCButton->setText(QApplication::translate("BCDlg", "+", 0));
#ifndef QT_NO_TOOLTIP
        DelBCButton->setToolTip(QApplication::translate("BCDlg", "Deletes selected boundary condition", 0));
#endif // QT_NO_TOOLTIP
        DelBCButton->setText(QApplication::translate("BCDlg", "-", 0));
#ifndef QT_NO_TOOLTIP
        LoadBCButton->setToolTip(QApplication::translate("BCDlg", "Loads boundary condition file", 0));
#endif // QT_NO_TOOLTIP
        LoadBCButton->setText(QApplication::translate("BCDlg", "Load", 0));
#ifndef QT_NO_TOOLTIP
        SaveBCButton->setToolTip(QApplication::translate("BCDlg", "Saves boundary condition file", 0));
#endif // QT_NO_TOOLTIP
        SaveBCButton->setText(QApplication::translate("BCDlg", "Save", 0));
#ifndef QT_NO_TOOLTIP
        BCTabWidget->setToolTip(QApplication::translate("BCDlg", "Boundary condition settings", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        FixAllButton->setToolTip(QApplication::translate("BCDlg", "Fix all degrees of freedom", 0));
#endif // QT_NO_TOOLTIP
        FixAllButton->setText(QApplication::translate("BCDlg", "Fix All", 0));
#ifndef QT_NO_TOOLTIP
        FixNoneButton->setToolTip(QApplication::translate("BCDlg", "Unfix all degrees of freedom", 0));
#endif // QT_NO_TOOLTIP
        FixNoneButton->setText(QApplication::translate("BCDlg", "Fix None", 0));
        TranslationGroup->setTitle(QApplication::translate("BCDlg", "Translation", 0));
        label_3->setText(QApplication::translate("BCDlg", "Fixed", 0));
        label->setText(QApplication::translate("BCDlg", "Force\n"
"(N)", 0));
        label_2->setText(QApplication::translate("BCDlg", "Displacement\n"
"(mm)", 0));
        XLabel->setText(QApplication::translate("BCDlg", "X", 0));
        XFixed->setText(QString());
        YLabel->setText(QApplication::translate("BCDlg", "Y", 0));
        YFixed->setText(QString());
        ZLabel->setText(QApplication::translate("BCDlg", "Z", 0));
        ZFixed->setText(QString());
        RotationGroup->setTitle(QApplication::translate("BCDlg", "Rotation", 0));
        label_4->setText(QApplication::translate("BCDlg", "Fixed", 0));
        label_5->setText(QApplication::translate("BCDlg", "Torque\n"
"(Nmm)", 0));
        label_6->setText(QApplication::translate("BCDlg", "Displacement\n"
"(degrees\302\255)", 0));
        TXLabel->setText(QApplication::translate("BCDlg", "\316\230x", 0));
        TXFixed->setText(QString());
        TYLabel->setText(QApplication::translate("BCDlg", "\316\230y", 0));
        TYFixed->setText(QString());
        TZLabel->setText(QApplication::translate("BCDlg", "\316\230z", 0));
        TZFixed->setText(QString());
        BCTabWidget->setTabText(BCTabWidget->indexOf(ModeTab), QApplication::translate("BCDlg", "Mode", 0));
        BCTabWidget->setTabText(BCTabWidget->indexOf(ShapeTab), QApplication::translate("BCDlg", "Shape", 0));
        BCDonePushButton->setText(QApplication::translate("BCDlg", "Finished Editing", 0));
    } // retranslateUi

};

namespace Ui {
    class BCDlg: public Ui_BCDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VBCS_H
