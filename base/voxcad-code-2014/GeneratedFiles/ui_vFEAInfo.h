/********************************************************************************
** Form generated from reading UI file 'vFEAInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VFEAINFO_H
#define UI_VFEAINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FEAInfoDlg
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *ViewTypeCombo;
    QLabel *ViewTypeLabel;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QSlider *DefSlider;
    QSlider *IsoThreshSlider;
    QSlider *SectionSlider;
    QVBoxLayout *verticalLayout_2;
    QLabel *DefLabel;
    QLabel *IsoThreshLabel;
    QLabel *SectionLabel;
    QGroupBox *DirGroup;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *DirMaxRadio;
    QRadioButton *DirXRadio;
    QRadioButton *DirYRadio;
    QRadioButton *DirZRadio;
    QLabel *FEAInfoLabel;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *DoneButton;

    void setupUi(QWidget *FEAInfoDlg)
    {
        if (FEAInfoDlg->objectName().isEmpty())
            FEAInfoDlg->setObjectName(QStringLiteral("FEAInfoDlg"));
        FEAInfoDlg->resize(188, 384);
        verticalLayout_4 = new QVBoxLayout(FEAInfoDlg);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ViewTypeCombo = new QComboBox(FEAInfoDlg);
        ViewTypeCombo->setObjectName(QStringLiteral("ViewTypeCombo"));

        horizontalLayout_3->addWidget(ViewTypeCombo);

        ViewTypeLabel = new QLabel(FEAInfoDlg);
        ViewTypeLabel->setObjectName(QStringLiteral("ViewTypeLabel"));

        horizontalLayout_3->addWidget(ViewTypeLabel);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        DefSlider = new QSlider(FEAInfoDlg);
        DefSlider->setObjectName(QStringLiteral("DefSlider"));
        DefSlider->setMaximum(1000);
        DefSlider->setSingleStep(10);
        DefSlider->setPageStep(100);
        DefSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(DefSlider);

        IsoThreshSlider = new QSlider(FEAInfoDlg);
        IsoThreshSlider->setObjectName(QStringLiteral("IsoThreshSlider"));
        IsoThreshSlider->setMaximum(1000);
        IsoThreshSlider->setSingleStep(10);
        IsoThreshSlider->setPageStep(100);
        IsoThreshSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(IsoThreshSlider);

        SectionSlider = new QSlider(FEAInfoDlg);
        SectionSlider->setObjectName(QStringLiteral("SectionSlider"));
        SectionSlider->setMaximum(1000);
        SectionSlider->setSingleStep(10);
        SectionSlider->setPageStep(100);
        SectionSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(SectionSlider);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        DefLabel = new QLabel(FEAInfoDlg);
        DefLabel->setObjectName(QStringLiteral("DefLabel"));

        verticalLayout_2->addWidget(DefLabel);

        IsoThreshLabel = new QLabel(FEAInfoDlg);
        IsoThreshLabel->setObjectName(QStringLiteral("IsoThreshLabel"));

        verticalLayout_2->addWidget(IsoThreshLabel);

        SectionLabel = new QLabel(FEAInfoDlg);
        SectionLabel->setObjectName(QStringLiteral("SectionLabel"));

        verticalLayout_2->addWidget(SectionLabel);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        DirGroup = new QGroupBox(FEAInfoDlg);
        DirGroup->setObjectName(QStringLiteral("DirGroup"));
        verticalLayout = new QVBoxLayout(DirGroup);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        DirMaxRadio = new QRadioButton(DirGroup);
        DirMaxRadio->setObjectName(QStringLiteral("DirMaxRadio"));

        horizontalLayout->addWidget(DirMaxRadio);

        DirXRadio = new QRadioButton(DirGroup);
        DirXRadio->setObjectName(QStringLiteral("DirXRadio"));

        horizontalLayout->addWidget(DirXRadio);

        DirYRadio = new QRadioButton(DirGroup);
        DirYRadio->setObjectName(QStringLiteral("DirYRadio"));

        horizontalLayout->addWidget(DirYRadio);

        DirZRadio = new QRadioButton(DirGroup);
        DirZRadio->setObjectName(QStringLiteral("DirZRadio"));

        horizontalLayout->addWidget(DirZRadio);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(DirGroup);

        FEAInfoLabel = new QLabel(FEAInfoDlg);
        FEAInfoLabel->setObjectName(QStringLiteral("FEAInfoLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FEAInfoLabel->sizePolicy().hasHeightForWidth());
        FEAInfoLabel->setSizePolicy(sizePolicy);
        FEAInfoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        FEAInfoLabel->setWordWrap(true);

        verticalLayout_4->addWidget(FEAInfoLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        DoneButton = new QPushButton(FEAInfoDlg);
        DoneButton->setObjectName(QStringLiteral("DoneButton"));

        horizontalLayout_4->addWidget(DoneButton);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(FEAInfoDlg);

        QMetaObject::connectSlotsByName(FEAInfoDlg);
    } // setupUi

    void retranslateUi(QWidget *FEAInfoDlg)
    {
        FEAInfoDlg->setWindowTitle(QApplication::translate("FEAInfoDlg", "FEA Info", 0));
        ViewTypeLabel->setText(QApplication::translate("FEAInfoDlg", "View Mode", 0));
        DefLabel->setText(QApplication::translate("FEAInfoDlg", "Deflection", 0));
        IsoThreshLabel->setText(QApplication::translate("FEAInfoDlg", "Iso Threshhold", 0));
        SectionLabel->setText(QApplication::translate("FEAInfoDlg", "Section Height", 0));
        DirGroup->setTitle(QApplication::translate("FEAInfoDlg", "View Component", 0));
        DirMaxRadio->setText(QApplication::translate("FEAInfoDlg", "Max", 0));
        DirXRadio->setText(QApplication::translate("FEAInfoDlg", "X", 0));
        DirYRadio->setText(QApplication::translate("FEAInfoDlg", "Y", 0));
        DirZRadio->setText(QApplication::translate("FEAInfoDlg", "Z", 0));
        FEAInfoLabel->setText(QApplication::translate("FEAInfoDlg", "FEA Info", 0));
        DoneButton->setText(QApplication::translate("FEAInfoDlg", "Finished Analyzing", 0));
    } // retranslateUi

};

namespace Ui {
    class FEAInfoDlg: public Ui_FEAInfoDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VFEAINFO_H
