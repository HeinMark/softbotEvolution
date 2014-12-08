/********************************************************************************
** Form generated from reading UI file 'vPrimEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VPRIMEDIT_H
#define UI_VPRIMEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrimEditDlg
{
public:
    QVBoxLayout *verticalLayout_9;
    QGroupBox *ShapeBox;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *BoxRadio;
    QRadioButton *CylinderRadio;
    QRadioButton *SphereRadio;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *MeshRadio;
    QPushButton *LoadMeshButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *PositionLabel;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *SnapCheckBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QSlider *XSlider;
    QSlider *YSlider;
    QSlider *ZSlider;
    QVBoxLayout *verticalLayout_5;
    QDoubleSpinBox *XSpin;
    QDoubleSpinBox *YSpin;
    QDoubleSpinBox *ZSpin;
    QVBoxLayout *verticalLayout_4;
    QLabel *XLabel;
    QLabel *YLabel;
    QLabel *ZLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *SizeLabel;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *LockCheckBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QSlider *DXSlider;
    QSlider *DYSlider;
    QSlider *DZSlider;
    QSlider *RSlider;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *DXSpin;
    QDoubleSpinBox *DYSpin;
    QDoubleSpinBox *DZSpin;
    QDoubleSpinBox *RSpin;
    QVBoxLayout *verticalLayout;
    QLabel *DXLabel;
    QLabel *DYLabel;
    QLabel *DZLabel;
    QLabel *RLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *RotateLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *DegreeSpinBox;
    QLabel *AngleLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *ApplyRotLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *RotXButton;
    QPushButton *RotYButton;
    QPushButton *RotZButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PrimEditDlg)
    {
        if (PrimEditDlg->objectName().isEmpty())
            PrimEditDlg->setObjectName(QStringLiteral("PrimEditDlg"));
        PrimEditDlg->resize(165, 551);
        verticalLayout_9 = new QVBoxLayout(PrimEditDlg);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        ShapeBox = new QGroupBox(PrimEditDlg);
        ShapeBox->setObjectName(QStringLiteral("ShapeBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShapeBox->sizePolicy().hasHeightForWidth());
        ShapeBox->setSizePolicy(sizePolicy);
        ShapeBox->setMaximumSize(QSize(16777215, 75));
        horizontalLayout_5 = new QHBoxLayout(ShapeBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(3, 0, 3, 3);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        BoxRadio = new QRadioButton(ShapeBox);
        BoxRadio->setObjectName(QStringLiteral("BoxRadio"));

        verticalLayout_7->addWidget(BoxRadio);

        CylinderRadio = new QRadioButton(ShapeBox);
        CylinderRadio->setObjectName(QStringLiteral("CylinderRadio"));

        verticalLayout_7->addWidget(CylinderRadio);

        SphereRadio = new QRadioButton(ShapeBox);
        SphereRadio->setObjectName(QStringLiteral("SphereRadio"));

        verticalLayout_7->addWidget(SphereRadio);


        horizontalLayout_5->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        MeshRadio = new QRadioButton(ShapeBox);
        MeshRadio->setObjectName(QStringLiteral("MeshRadio"));

        verticalLayout_8->addWidget(MeshRadio);

        LoadMeshButton = new QPushButton(ShapeBox);
        LoadMeshButton->setObjectName(QStringLiteral("LoadMeshButton"));
        LoadMeshButton->setMaximumSize(QSize(50, 16777215));

        verticalLayout_8->addWidget(LoadMeshButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_8);


        verticalLayout_9->addWidget(ShapeBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        PositionLabel = new QLabel(PrimEditDlg);
        PositionLabel->setObjectName(QStringLiteral("PositionLabel"));

        horizontalLayout_4->addWidget(PositionLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        SnapCheckBox = new QCheckBox(PrimEditDlg);
        SnapCheckBox->setObjectName(QStringLiteral("SnapCheckBox"));

        horizontalLayout_4->addWidget(SnapCheckBox);


        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        XSlider = new QSlider(PrimEditDlg);
        XSlider->setObjectName(QStringLiteral("XSlider"));
        XSlider->setMaximum(100);
        XSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(XSlider);

        YSlider = new QSlider(PrimEditDlg);
        YSlider->setObjectName(QStringLiteral("YSlider"));
        YSlider->setMaximum(100);
        YSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(YSlider);

        ZSlider = new QSlider(PrimEditDlg);
        ZSlider->setObjectName(QStringLiteral("ZSlider"));
        ZSlider->setMaximum(100);
        ZSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(ZSlider);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        XSpin = new QDoubleSpinBox(PrimEditDlg);
        XSpin->setObjectName(QStringLiteral("XSpin"));
        XSpin->setMaximum(1);
        XSpin->setSingleStep(0.01);

        verticalLayout_5->addWidget(XSpin);

        YSpin = new QDoubleSpinBox(PrimEditDlg);
        YSpin->setObjectName(QStringLiteral("YSpin"));
        YSpin->setMaximum(1);
        YSpin->setSingleStep(0.01);

        verticalLayout_5->addWidget(YSpin);

        ZSpin = new QDoubleSpinBox(PrimEditDlg);
        ZSpin->setObjectName(QStringLiteral("ZSpin"));
        ZSpin->setMaximum(1);
        ZSpin->setSingleStep(0.01);

        verticalLayout_5->addWidget(ZSpin);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        XLabel = new QLabel(PrimEditDlg);
        XLabel->setObjectName(QStringLiteral("XLabel"));

        verticalLayout_4->addWidget(XLabel);

        YLabel = new QLabel(PrimEditDlg);
        YLabel->setObjectName(QStringLiteral("YLabel"));

        verticalLayout_4->addWidget(YLabel);

        ZLabel = new QLabel(PrimEditDlg);
        ZLabel->setObjectName(QStringLiteral("ZLabel"));

        verticalLayout_4->addWidget(ZLabel);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_9->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        SizeLabel = new QLabel(PrimEditDlg);
        SizeLabel->setObjectName(QStringLiteral("SizeLabel"));

        horizontalLayout_3->addWidget(SizeLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        LockCheckBox = new QCheckBox(PrimEditDlg);
        LockCheckBox->setObjectName(QStringLiteral("LockCheckBox"));

        horizontalLayout_3->addWidget(LockCheckBox);


        verticalLayout_9->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        DXSlider = new QSlider(PrimEditDlg);
        DXSlider->setObjectName(QStringLiteral("DXSlider"));
        DXSlider->setMinimum(1);
        DXSlider->setMaximum(100);
        DXSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(DXSlider);

        DYSlider = new QSlider(PrimEditDlg);
        DYSlider->setObjectName(QStringLiteral("DYSlider"));
        DYSlider->setMinimum(1);
        DYSlider->setMaximum(100);
        DYSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(DYSlider);

        DZSlider = new QSlider(PrimEditDlg);
        DZSlider->setObjectName(QStringLiteral("DZSlider"));
        DZSlider->setMinimum(1);
        DZSlider->setMaximum(100);
        DZSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(DZSlider);

        RSlider = new QSlider(PrimEditDlg);
        RSlider->setObjectName(QStringLiteral("RSlider"));
        RSlider->setMinimum(1);
        RSlider->setMaximum(100);
        RSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(RSlider);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        DXSpin = new QDoubleSpinBox(PrimEditDlg);
        DXSpin->setObjectName(QStringLiteral("DXSpin"));
        DXSpin->setMaximum(1);
        DXSpin->setSingleStep(0.01);

        verticalLayout_2->addWidget(DXSpin);

        DYSpin = new QDoubleSpinBox(PrimEditDlg);
        DYSpin->setObjectName(QStringLiteral("DYSpin"));
        DYSpin->setMaximum(1);
        DYSpin->setSingleStep(0.01);

        verticalLayout_2->addWidget(DYSpin);

        DZSpin = new QDoubleSpinBox(PrimEditDlg);
        DZSpin->setObjectName(QStringLiteral("DZSpin"));
        DZSpin->setMaximum(1);
        DZSpin->setSingleStep(0.01);

        verticalLayout_2->addWidget(DZSpin);

        RSpin = new QDoubleSpinBox(PrimEditDlg);
        RSpin->setObjectName(QStringLiteral("RSpin"));
        RSpin->setMaximum(1);
        RSpin->setSingleStep(0.01);

        verticalLayout_2->addWidget(RSpin);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        DXLabel = new QLabel(PrimEditDlg);
        DXLabel->setObjectName(QStringLiteral("DXLabel"));

        verticalLayout->addWidget(DXLabel);

        DYLabel = new QLabel(PrimEditDlg);
        DYLabel->setObjectName(QStringLiteral("DYLabel"));

        verticalLayout->addWidget(DYLabel);

        DZLabel = new QLabel(PrimEditDlg);
        DZLabel->setObjectName(QStringLiteral("DZLabel"));

        verticalLayout->addWidget(DZLabel);

        RLabel = new QLabel(PrimEditDlg);
        RLabel->setObjectName(QStringLiteral("RLabel"));

        verticalLayout->addWidget(RLabel);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_9->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        RotateLabel = new QLabel(PrimEditDlg);
        RotateLabel->setObjectName(QStringLiteral("RotateLabel"));

        horizontalLayout_6->addWidget(RotateLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        DegreeSpinBox = new QSpinBox(PrimEditDlg);
        DegreeSpinBox->setObjectName(QStringLiteral("DegreeSpinBox"));
        DegreeSpinBox->setMinimum(-359);
        DegreeSpinBox->setMaximum(359);
        DegreeSpinBox->setSingleStep(5);

        horizontalLayout_7->addWidget(DegreeSpinBox);

        AngleLabel = new QLabel(PrimEditDlg);
        AngleLabel->setObjectName(QStringLiteral("AngleLabel"));

        horizontalLayout_7->addWidget(AngleLabel);


        verticalLayout_9->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        ApplyRotLabel = new QLabel(PrimEditDlg);
        ApplyRotLabel->setObjectName(QStringLiteral("ApplyRotLabel"));

        horizontalLayout_8->addWidget(ApplyRotLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        RotXButton = new QPushButton(PrimEditDlg);
        RotXButton->setObjectName(QStringLiteral("RotXButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(RotXButton->sizePolicy().hasHeightForWidth());
        RotXButton->setSizePolicy(sizePolicy1);
        RotXButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_8->addWidget(RotXButton);

        RotYButton = new QPushButton(PrimEditDlg);
        RotYButton->setObjectName(QStringLiteral("RotYButton"));
        RotYButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_8->addWidget(RotYButton);

        RotZButton = new QPushButton(PrimEditDlg);
        RotZButton->setObjectName(QStringLiteral("RotZButton"));
        RotZButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_8->addWidget(RotZButton);


        verticalLayout_9->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 136, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);


        retranslateUi(PrimEditDlg);

        QMetaObject::connectSlotsByName(PrimEditDlg);
    } // setupUi

    void retranslateUi(QWidget *PrimEditDlg)
    {
        PrimEditDlg->setWindowTitle(QApplication::translate("PrimEditDlg", "Form", 0));
        ShapeBox->setTitle(QApplication::translate("PrimEditDlg", "Shape", 0));
        BoxRadio->setText(QApplication::translate("PrimEditDlg", "Box", 0));
        CylinderRadio->setText(QApplication::translate("PrimEditDlg", "Cylinder", 0));
        SphereRadio->setText(QApplication::translate("PrimEditDlg", "Sphere", 0));
        MeshRadio->setText(QApplication::translate("PrimEditDlg", "Mesh", 0));
        LoadMeshButton->setText(QApplication::translate("PrimEditDlg", "Load", 0));
        PositionLabel->setText(QApplication::translate("PrimEditDlg", "Position", 0));
        SnapCheckBox->setText(QApplication::translate("PrimEditDlg", "Snap", 0));
        XLabel->setText(QApplication::translate("PrimEditDlg", "X (%)", 0));
        YLabel->setText(QApplication::translate("PrimEditDlg", "Y (%)", 0));
        ZLabel->setText(QApplication::translate("PrimEditDlg", "Z (%)", 0));
        SizeLabel->setText(QApplication::translate("PrimEditDlg", "Size", 0));
        LockCheckBox->setText(QApplication::translate("PrimEditDlg", "Lock Aspect", 0));
        DXLabel->setText(QApplication::translate("PrimEditDlg", "dX (%)", 0));
        DYLabel->setText(QApplication::translate("PrimEditDlg", "dY (%)", 0));
        DZLabel->setText(QApplication::translate("PrimEditDlg", "dZ (%)", 0));
        RLabel->setText(QApplication::translate("PrimEditDlg", "R (%)", 0));
        RotateLabel->setText(QApplication::translate("PrimEditDlg", "Rotate", 0));
        AngleLabel->setText(QApplication::translate("PrimEditDlg", "Deg", 0));
        ApplyRotLabel->setText(QApplication::translate("PrimEditDlg", "Apply:", 0));
        RotXButton->setText(QApplication::translate("PrimEditDlg", "X", 0));
        RotYButton->setText(QApplication::translate("PrimEditDlg", "Y", 0));
        RotZButton->setText(QApplication::translate("PrimEditDlg", "Z", 0));
    } // retranslateUi

};

namespace Ui {
    class PrimEditDlg: public Ui_PrimEditDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VPRIMEDIT_H
