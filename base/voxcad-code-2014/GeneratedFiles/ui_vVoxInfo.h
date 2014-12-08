/********************************************************************************
** Form generated from reading UI file 'vVoxInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVOXINFO_H
#define UI_VVOXINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoxInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *InfoScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *InfoLabel;

    void setupUi(QWidget *VoxInfoDialog)
    {
        if (VoxInfoDialog->objectName().isEmpty())
            VoxInfoDialog->setObjectName(QStringLiteral("VoxInfoDialog"));
        VoxInfoDialog->resize(252, 201);
        verticalLayout = new QVBoxLayout(VoxInfoDialog);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        InfoScrollArea = new QScrollArea(VoxInfoDialog);
        InfoScrollArea->setObjectName(QStringLiteral("InfoScrollArea"));
        InfoScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        InfoScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 250, 199));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        InfoLabel = new QLabel(scrollAreaWidgetContents);
        InfoLabel->setObjectName(QStringLiteral("InfoLabel"));
        InfoLabel->setLineWidth(0);
        InfoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        InfoLabel->setWordWrap(true);
        InfoLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_2->addWidget(InfoLabel);

        InfoScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(InfoScrollArea);


        retranslateUi(VoxInfoDialog);

        QMetaObject::connectSlotsByName(VoxInfoDialog);
    } // setupUi

    void retranslateUi(QWidget *VoxInfoDialog)
    {
        VoxInfoDialog->setWindowTitle(QApplication::translate("VoxInfoDialog", "Voxel Info", 0));
        InfoLabel->setText(QApplication::translate("VoxInfoDialog", "Voxel: Info", 0));
    } // retranslateUi

};

namespace Ui {
    class VoxInfoDialog: public Ui_VoxInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVOXINFO_H
