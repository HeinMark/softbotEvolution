/********************************************************************************
** Form generated from reading UI file 'VoxCad.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOXCAD_H
#define UI_VOXCAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoxCadClass
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCenter_View;
    QAction *actionSave_As;
    QAction *actionASCII_VXC;
    QAction *actionBASE64_VXC;
    QAction *actionSolve;
    QAction *actionPerspective;
    QAction *actionTop;
    QAction *actionBottom;
    QAction *actionLeft;
    QAction *actionRight;
    QAction *actionFront;
    QAction *actionBack;
    QAction *actionEdit_Voxels;
    QAction *actionLayer_Back;
    QAction *actionLayer_Forward;
    QAction *actionPencil;
    QAction *actionRectangle;
    QAction *actionCircle;
    QAction *actionReference_View;
    QAction *actionPalette;
    QAction *actionWorkspace;
    QAction *actionInfo;
    QAction *actionBCs;
    QAction *actionSection_View;
    QAction *actionNew;
    QAction *actionVXA_OUT;
    QAction *actionSTL;
    QAction *actionDMU_Out;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionVXA_IN;
    QAction *actionLarge_Mode;
    QAction *actionPhysics;
    QAction *action3D_Brush;
    QAction *actionTensile;
    QAction *actionVoxelCoordinates;
    QAction *actionPaint_Bucket;
    QAction *actionView_Tiled;
    QAction *actionGraphics_Enabled;
    QAction *actionKV6;
    QAction *actionBenchmark;
    QAction *actionShow_Triad;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuExport;
    QMenu *menuAlternate_VXC;
    QMenu *menuMesh;
    QMenu *menuImport;
    QMenu *menuView;
    QMenu *menuStandard_Views;
    QMenu *menuSection;
    QMenu *menuAnalyze;
    QMenu *menuTools;
    QMenu *menuDrawing;
    QMenu *menuEdit;
    QStatusBar *statusBar;
    QToolBar *FileToolBar;
    QToolBar *ViewtoolBar;
    QToolBar *DrawingtoolBar;
    QToolBar *DialogToolbar;
    QToolBar *SectionToolBar;

    void setupUi(QMainWindow *VoxCadClass)
    {
        if (VoxCadClass->objectName().isEmpty())
            VoxCadClass->setObjectName(QStringLiteral("VoxCadClass"));
        VoxCadClass->setEnabled(true);
        VoxCadClass->resize(751, 478);
        QIcon icon;
        icon.addFile(QStringLiteral(":/VoxCad/VoxCad.ico"), QSize(), QIcon::Normal, QIcon::Off);
        VoxCadClass->setWindowIcon(icon);
        actionOpen = new QAction(VoxCadClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/Icons/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(VoxCadClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/Icons/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionCenter_View = new QAction(VoxCadClass);
        actionCenter_View->setObjectName(QStringLiteral("actionCenter_View"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icons/Icons/ZoomExtents2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCenter_View->setIcon(icon3);
        actionSave_As = new QAction(VoxCadClass);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionASCII_VXC = new QAction(VoxCadClass);
        actionASCII_VXC->setObjectName(QStringLiteral("actionASCII_VXC"));
        actionBASE64_VXC = new QAction(VoxCadClass);
        actionBASE64_VXC->setObjectName(QStringLiteral("actionBASE64_VXC"));
        actionSolve = new QAction(VoxCadClass);
        actionSolve->setObjectName(QStringLiteral("actionSolve"));
        actionSolve->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/Icons/Analyze.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSolve->setIcon(icon4);
        actionSolve->setVisible(false);
        actionPerspective = new QAction(VoxCadClass);
        actionPerspective->setObjectName(QStringLiteral("actionPerspective"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icons/Icons/ViewPerspective.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPerspective->setIcon(icon5);
        actionTop = new QAction(VoxCadClass);
        actionTop->setObjectName(QStringLiteral("actionTop"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icons/Icons/ViewTop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTop->setIcon(icon6);
        actionBottom = new QAction(VoxCadClass);
        actionBottom->setObjectName(QStringLiteral("actionBottom"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icons/Icons/ViewBottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBottom->setIcon(icon7);
        actionLeft = new QAction(VoxCadClass);
        actionLeft->setObjectName(QStringLiteral("actionLeft"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Icons/Icons/ViewLeft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft->setIcon(icon8);
        actionRight = new QAction(VoxCadClass);
        actionRight->setObjectName(QStringLiteral("actionRight"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Icons/Icons/ViewRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRight->setIcon(icon9);
        actionFront = new QAction(VoxCadClass);
        actionFront->setObjectName(QStringLiteral("actionFront"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Icons/Icons/ViewFront.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFront->setIcon(icon10);
        actionBack = new QAction(VoxCadClass);
        actionBack->setObjectName(QStringLiteral("actionBack"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Icons/Icons/ViewBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon11);
        actionEdit_Voxels = new QAction(VoxCadClass);
        actionEdit_Voxels->setObjectName(QStringLiteral("actionEdit_Voxels"));
        actionEdit_Voxels->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Icons/Icons/EditLayer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_Voxels->setIcon(icon12);
        actionLayer_Back = new QAction(VoxCadClass);
        actionLayer_Back->setObjectName(QStringLiteral("actionLayer_Back"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Icons/Icons/LayerBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLayer_Back->setIcon(icon13);
        actionLayer_Forward = new QAction(VoxCadClass);
        actionLayer_Forward->setObjectName(QStringLiteral("actionLayer_Forward"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Icons/Icons/LayerForward.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLayer_Forward->setIcon(icon14);
        actionPencil = new QAction(VoxCadClass);
        actionPencil->setObjectName(QStringLiteral("actionPencil"));
        actionPencil->setCheckable(true);
        actionPencil->setChecked(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/Icons/Icons/Pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPencil->setIcon(icon15);
        actionRectangle = new QAction(VoxCadClass);
        actionRectangle->setObjectName(QStringLiteral("actionRectangle"));
        actionRectangle->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/Icons/Icons/Rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectangle->setIcon(icon16);
        actionCircle = new QAction(VoxCadClass);
        actionCircle->setObjectName(QStringLiteral("actionCircle"));
        actionCircle->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/Icons/Icons/Ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon17);
        actionReference_View = new QAction(VoxCadClass);
        actionReference_View->setObjectName(QStringLiteral("actionReference_View"));
        actionReference_View->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/Icons/Icons/Aux_View.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReference_View->setIcon(icon18);
        actionPalette = new QAction(VoxCadClass);
        actionPalette->setObjectName(QStringLiteral("actionPalette"));
        actionPalette->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/Icons/Icons/Material.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPalette->setIcon(icon19);
        actionWorkspace = new QAction(VoxCadClass);
        actionWorkspace->setObjectName(QStringLiteral("actionWorkspace"));
        actionWorkspace->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/Icons/Icons/Workspace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWorkspace->setIcon(icon20);
        actionInfo = new QAction(VoxCadClass);
        actionInfo->setObjectName(QStringLiteral("actionInfo"));
        actionInfo->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/Icons/Icons/Info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo->setIcon(icon21);
        actionBCs = new QAction(VoxCadClass);
        actionBCs->setObjectName(QStringLiteral("actionBCs"));
        actionBCs->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/Icons/Icons/BCs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBCs->setIcon(icon22);
        actionSection_View = new QAction(VoxCadClass);
        actionSection_View->setObjectName(QStringLiteral("actionSection_View"));
        actionSection_View->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/Icons/Icons/Section.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSection_View->setIcon(icon23);
        actionNew = new QAction(VoxCadClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/Icons/Icons/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon24);
        actionVXA_OUT = new QAction(VoxCadClass);
        actionVXA_OUT->setObjectName(QStringLiteral("actionVXA_OUT"));
        actionSTL = new QAction(VoxCadClass);
        actionSTL->setObjectName(QStringLiteral("actionSTL"));
        actionDMU_Out = new QAction(VoxCadClass);
        actionDMU_Out->setObjectName(QStringLiteral("actionDMU_Out"));
        actionCopy = new QAction(VoxCadClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/Icons/Icons/Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon25);
        actionCut = new QAction(VoxCadClass);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/Icons/Icons/Cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon26);
        actionPaste = new QAction(VoxCadClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/Icons/Icons/Paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon27);
        actionVXA_IN = new QAction(VoxCadClass);
        actionVXA_IN->setObjectName(QStringLiteral("actionVXA_IN"));
        actionLarge_Mode = new QAction(VoxCadClass);
        actionLarge_Mode->setObjectName(QStringLiteral("actionLarge_Mode"));
        actionLarge_Mode->setCheckable(true);
        actionPhysics = new QAction(VoxCadClass);
        actionPhysics->setObjectName(QStringLiteral("actionPhysics"));
        actionPhysics->setCheckable(true);
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/Icons/Icons/Sandbox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPhysics->setIcon(icon28);
        action3D_Brush = new QAction(VoxCadClass);
        action3D_Brush->setObjectName(QStringLiteral("action3D_Brush"));
        action3D_Brush->setCheckable(true);
        QIcon icon29;
        icon29.addFile(QStringLiteral(":/Icons/Icons/3DBrush.png"), QSize(), QIcon::Normal, QIcon::Off);
        action3D_Brush->setIcon(icon29);
        actionTensile = new QAction(VoxCadClass);
        actionTensile->setObjectName(QStringLiteral("actionTensile"));
        actionTensile->setCheckable(true);
        QIcon icon30;
        icon30.addFile(QStringLiteral(":/Icons/Icons/Tensile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTensile->setIcon(icon30);
        actionVoxelCoordinates = new QAction(VoxCadClass);
        actionVoxelCoordinates->setObjectName(QStringLiteral("actionVoxelCoordinates"));
        actionPaint_Bucket = new QAction(VoxCadClass);
        actionPaint_Bucket->setObjectName(QStringLiteral("actionPaint_Bucket"));
        actionPaint_Bucket->setCheckable(true);
        QIcon icon31;
        icon31.addFile(QStringLiteral(":/Icons/Icons/Bucket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaint_Bucket->setIcon(icon31);
        actionView_Tiled = new QAction(VoxCadClass);
        actionView_Tiled->setObjectName(QStringLiteral("actionView_Tiled"));
        actionView_Tiled->setCheckable(true);
        actionGraphics_Enabled = new QAction(VoxCadClass);
        actionGraphics_Enabled->setObjectName(QStringLiteral("actionGraphics_Enabled"));
        actionGraphics_Enabled->setCheckable(true);
        actionKV6 = new QAction(VoxCadClass);
        actionKV6->setObjectName(QStringLiteral("actionKV6"));
        actionBenchmark = new QAction(VoxCadClass);
        actionBenchmark->setObjectName(QStringLiteral("actionBenchmark"));
        actionBenchmark->setVisible(false);
        actionShow_Triad = new QAction(VoxCadClass);
        actionShow_Triad->setObjectName(QStringLiteral("actionShow_Triad"));
        actionShow_Triad->setCheckable(true);
        actionShow_Triad->setChecked(true);
        centralWidget = new QWidget(VoxCadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        VoxCadClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VoxCadClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 751, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuExport = new QMenu(menuFile);
        menuExport->setObjectName(QStringLiteral("menuExport"));
        menuAlternate_VXC = new QMenu(menuExport);
        menuAlternate_VXC->setObjectName(QStringLiteral("menuAlternate_VXC"));
        menuMesh = new QMenu(menuExport);
        menuMesh->setObjectName(QStringLiteral("menuMesh"));
        menuImport = new QMenu(menuFile);
        menuImport->setObjectName(QStringLiteral("menuImport"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuStandard_Views = new QMenu(menuView);
        menuStandard_Views->setObjectName(QStringLiteral("menuStandard_Views"));
        menuSection = new QMenu(menuView);
        menuSection->setObjectName(QStringLiteral("menuSection"));
        menuAnalyze = new QMenu(menuBar);
        menuAnalyze->setObjectName(QStringLiteral("menuAnalyze"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuDrawing = new QMenu(menuTools);
        menuDrawing->setObjectName(QStringLiteral("menuDrawing"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        VoxCadClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(VoxCadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VoxCadClass->setStatusBar(statusBar);
        FileToolBar = new QToolBar(VoxCadClass);
        FileToolBar->setObjectName(QStringLiteral("FileToolBar"));
        FileToolBar->setIconSize(QSize(16, 16));
        VoxCadClass->addToolBar(Qt::TopToolBarArea, FileToolBar);
        ViewtoolBar = new QToolBar(VoxCadClass);
        ViewtoolBar->setObjectName(QStringLiteral("ViewtoolBar"));
        ViewtoolBar->setIconSize(QSize(16, 16));
        VoxCadClass->addToolBar(Qt::TopToolBarArea, ViewtoolBar);
        DrawingtoolBar = new QToolBar(VoxCadClass);
        DrawingtoolBar->setObjectName(QStringLiteral("DrawingtoolBar"));
        DrawingtoolBar->setIconSize(QSize(16, 16));
        VoxCadClass->addToolBar(Qt::LeftToolBarArea, DrawingtoolBar);
        DialogToolbar = new QToolBar(VoxCadClass);
        DialogToolbar->setObjectName(QStringLiteral("DialogToolbar"));
        DialogToolbar->setIconSize(QSize(16, 16));
        VoxCadClass->addToolBar(Qt::TopToolBarArea, DialogToolbar);
        SectionToolBar = new QToolBar(VoxCadClass);
        SectionToolBar->setObjectName(QStringLiteral("SectionToolBar"));
        SectionToolBar->setIconSize(QSize(16, 16));
        VoxCadClass->addToolBar(Qt::TopToolBarArea, SectionToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuAnalyze->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(menuImport->menuAction());
        menuFile->addAction(menuExport->menuAction());
        menuExport->addAction(actionVXA_OUT);
        menuExport->addAction(actionKV6);
        menuExport->addAction(actionDMU_Out);
        menuExport->addAction(actionVoxelCoordinates);
        menuExport->addAction(menuMesh->menuAction());
        menuExport->addAction(menuAlternate_VXC->menuAction());
        menuAlternate_VXC->addAction(actionBASE64_VXC);
        menuAlternate_VXC->addAction(actionASCII_VXC);
        menuMesh->addAction(actionSTL);
        menuImport->addAction(actionVXA_IN);
        menuView->addAction(actionCenter_View);
        menuView->addAction(menuStandard_Views->menuAction());
        menuView->addAction(menuSection->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionShow_Triad);
        menuView->addAction(actionLarge_Mode);
        menuView->addAction(actionView_Tiled);
        menuView->addAction(actionGraphics_Enabled);
        menuView->addSeparator();
        menuView->addAction(actionReference_View);
        menuView->addAction(actionInfo);
        menuView->addSeparator();
        menuStandard_Views->addAction(actionPerspective);
        menuStandard_Views->addSeparator();
        menuStandard_Views->addAction(actionTop);
        menuStandard_Views->addAction(actionBottom);
        menuStandard_Views->addAction(actionLeft);
        menuStandard_Views->addAction(actionRight);
        menuStandard_Views->addAction(actionFront);
        menuStandard_Views->addAction(actionBack);
        menuSection->addAction(actionSection_View);
        menuSection->addAction(actionLayer_Forward);
        menuSection->addAction(actionLayer_Back);
        menuAnalyze->addAction(actionBCs);
        menuAnalyze->addAction(actionSolve);
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(actionTensile);
        menuAnalyze->addAction(actionPhysics);
        menuAnalyze->addAction(actionBenchmark);
        menuTools->addAction(actionEdit_Voxels);
        menuTools->addAction(action3D_Brush);
        menuTools->addSeparator();
        menuTools->addAction(menuDrawing->menuAction());
        menuDrawing->addAction(actionPencil);
        menuDrawing->addAction(actionRectangle);
        menuDrawing->addAction(actionCircle);
        menuDrawing->addAction(actionPaint_Bucket);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionWorkspace);
        menuEdit->addAction(actionPalette);
        FileToolBar->addAction(actionNew);
        FileToolBar->addAction(actionOpen);
        FileToolBar->addAction(actionSave);
        ViewtoolBar->addAction(actionCenter_View);
        ViewtoolBar->addAction(actionPerspective);
        ViewtoolBar->addAction(actionTop);
        ViewtoolBar->addAction(actionBottom);
        ViewtoolBar->addAction(actionLeft);
        ViewtoolBar->addAction(actionRight);
        ViewtoolBar->addAction(actionFront);
        ViewtoolBar->addAction(actionBack);
        DrawingtoolBar->addAction(actionPencil);
        DrawingtoolBar->addAction(actionRectangle);
        DrawingtoolBar->addAction(actionCircle);
        DrawingtoolBar->addAction(actionPaint_Bucket);
        DialogToolbar->addAction(actionPalette);
        DialogToolbar->addAction(actionWorkspace);
        DialogToolbar->addAction(actionEdit_Voxels);
        DialogToolbar->addAction(action3D_Brush);
        DialogToolbar->addAction(actionInfo);
        DialogToolbar->addAction(actionReference_View);
        DialogToolbar->addAction(actionBCs);
        DialogToolbar->addAction(actionPhysics);
        DialogToolbar->addAction(actionTensile);
        SectionToolBar->addAction(actionSection_View);
        SectionToolBar->addAction(actionLayer_Back);
        SectionToolBar->addAction(actionLayer_Forward);

        retranslateUi(VoxCadClass);

        QMetaObject::connectSlotsByName(VoxCadClass);
    } // setupUi

    void retranslateUi(QMainWindow *VoxCadClass)
    {
        VoxCadClass->setWindowTitle(QApplication::translate("VoxCadClass", "VoxCad", 0));
        actionOpen->setText(QApplication::translate("VoxCadClass", "Open", 0));
        actionOpen->setShortcut(QApplication::translate("VoxCadClass", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("VoxCadClass", "Save", 0));
        actionSave->setShortcut(QApplication::translate("VoxCadClass", "Ctrl+S", 0));
        actionCenter_View->setText(QApplication::translate("VoxCadClass", "Zoom Extents", 0));
        actionSave_As->setText(QApplication::translate("VoxCadClass", "Save As", 0));
        actionSave_As->setShortcut(QApplication::translate("VoxCadClass", "Ctrl+Shift+S", 0));
        actionASCII_VXC->setText(QApplication::translate("VoxCadClass", "Ascii", 0));
        actionBASE64_VXC->setText(QApplication::translate("VoxCadClass", "Base64", 0));
        actionSolve->setText(QApplication::translate("VoxCadClass", "Solve", 0));
        actionPerspective->setText(QApplication::translate("VoxCadClass", "Perspective", 0));
        actionPerspective->setShortcut(QApplication::translate("VoxCadClass", "Alt+1", 0));
        actionTop->setText(QApplication::translate("VoxCadClass", "Top", 0));
        actionTop->setShortcut(QApplication::translate("VoxCadClass", "Alt+2", 0));
        actionBottom->setText(QApplication::translate("VoxCadClass", "Bottom", 0));
        actionBottom->setShortcut(QApplication::translate("VoxCadClass", "Alt+3", 0));
        actionLeft->setText(QApplication::translate("VoxCadClass", "Left", 0));
        actionLeft->setShortcut(QApplication::translate("VoxCadClass", "Alt+4", 0));
        actionRight->setText(QApplication::translate("VoxCadClass", "Right", 0));
        actionRight->setShortcut(QApplication::translate("VoxCadClass", "Alt+5", 0));
        actionFront->setText(QApplication::translate("VoxCadClass", "Front", 0));
        actionFront->setShortcut(QApplication::translate("VoxCadClass", "Alt+6", 0));
        actionBack->setText(QApplication::translate("VoxCadClass", "Back", 0));
        actionBack->setShortcut(QApplication::translate("VoxCadClass", "Alt+7", 0));
        actionEdit_Voxels->setText(QApplication::translate("VoxCadClass", "Edit Voxels", 0));
        actionEdit_Voxels->setShortcut(QApplication::translate("VoxCadClass", "E", 0));
        actionLayer_Back->setText(QApplication::translate("VoxCadClass", "Layer Back", 0));
        actionLayer_Back->setShortcut(QApplication::translate("VoxCadClass", "-", 0));
        actionLayer_Forward->setText(QApplication::translate("VoxCadClass", "Layer Forward", 0));
        actionLayer_Forward->setShortcut(QApplication::translate("VoxCadClass", "+", 0));
        actionPencil->setText(QApplication::translate("VoxCadClass", "Pencil", 0));
        actionPencil->setShortcut(QApplication::translate("VoxCadClass", "Alt+Q", 0));
        actionRectangle->setText(QApplication::translate("VoxCadClass", "Rectangle", 0));
        actionRectangle->setShortcut(QApplication::translate("VoxCadClass", "Alt+W", 0));
        actionCircle->setText(QApplication::translate("VoxCadClass", "Circle", 0));
        actionCircle->setShortcut(QApplication::translate("VoxCadClass", "Alt+E", 0));
        actionReference_View->setText(QApplication::translate("VoxCadClass", "Reference View", 0));
        actionReference_View->setShortcut(QApplication::translate("VoxCadClass", "R", 0));
        actionPalette->setText(QApplication::translate("VoxCadClass", "Palette", 0));
        actionPalette->setShortcut(QApplication::translate("VoxCadClass", "P", 0));
        actionWorkspace->setText(QApplication::translate("VoxCadClass", "Workspace", 0));
        actionWorkspace->setShortcut(QApplication::translate("VoxCadClass", "W", 0));
        actionInfo->setText(QApplication::translate("VoxCadClass", "Info", 0));
        actionInfo->setShortcut(QApplication::translate("VoxCadClass", "I", 0));
        actionBCs->setText(QApplication::translate("VoxCadClass", "Boundary Conditions", 0));
        actionBCs->setShortcut(QApplication::translate("VoxCadClass", "B", 0));
        actionSection_View->setText(QApplication::translate("VoxCadClass", "Section View", 0));
        actionSection_View->setShortcut(QApplication::translate("VoxCadClass", "Alt+S", 0));
        actionNew->setText(QApplication::translate("VoxCadClass", "New", 0));
        actionNew->setShortcut(QApplication::translate("VoxCadClass", "Ctrl+N", 0));
        actionVXA_OUT->setText(QApplication::translate("VoxCadClass", "Simulation", 0));
        actionSTL->setText(QApplication::translate("VoxCadClass", "STL", 0));
        actionDMU_Out->setText(QApplication::translate("VoxCadClass", "DMU", 0));
        actionCopy->setText(QApplication::translate("VoxCadClass", "Copy", 0));
        actionCopy->setShortcut(QApplication::translate("VoxCadClass", "Ctrl+C", 0));
        actionCut->setText(QApplication::translate("VoxCadClass", "Cut", 0));
        actionCut->setShortcut(QApplication::translate("VoxCadClass", "Ctrl+X", 0));
        actionPaste->setText(QApplication::translate("VoxCadClass", "Paste", 0));
        actionPaste->setShortcut(QApplication::translate("VoxCadClass", "Ctrl+V", 0));
        actionVXA_IN->setText(QApplication::translate("VoxCadClass", "Simulation", 0));
        actionLarge_Mode->setText(QApplication::translate("VoxCadClass", "Large Mode", 0));
        actionPhysics->setText(QApplication::translate("VoxCadClass", "Physics Sandbox", 0));
        action3D_Brush->setText(QApplication::translate("VoxCadClass", "3D Brush", 0));
        actionTensile->setText(QApplication::translate("VoxCadClass", "Tensile Test", 0));
        actionVoxelCoordinates->setText(QApplication::translate("VoxCadClass", "Voxel Coordinates", 0));
        actionPaint_Bucket->setText(QApplication::translate("VoxCadClass", "Paint Bucket", 0));
        actionView_Tiled->setText(QApplication::translate("VoxCadClass", "View Tiled", 0));
        actionGraphics_Enabled->setText(QApplication::translate("VoxCadClass", "Graphics Enabled", 0));
        actionKV6->setText(QApplication::translate("VoxCadClass", "KV6", 0));
        actionBenchmark->setText(QApplication::translate("VoxCadClass", "Benchmark", 0));
        actionShow_Triad->setText(QApplication::translate("VoxCadClass", "Show Triad", 0));
        menuFile->setTitle(QApplication::translate("VoxCadClass", "File", 0));
        menuExport->setTitle(QApplication::translate("VoxCadClass", "Export", 0));
        menuAlternate_VXC->setTitle(QApplication::translate("VoxCadClass", "Alternate VXC", 0));
        menuMesh->setTitle(QApplication::translate("VoxCadClass", "Mesh", 0));
        menuImport->setTitle(QApplication::translate("VoxCadClass", "Import", 0));
        menuView->setTitle(QApplication::translate("VoxCadClass", "View", 0));
        menuStandard_Views->setTitle(QApplication::translate("VoxCadClass", "Standard Views", 0));
        menuSection->setTitle(QApplication::translate("VoxCadClass", "Section", 0));
        menuAnalyze->setTitle(QApplication::translate("VoxCadClass", "Analyze", 0));
        menuTools->setTitle(QApplication::translate("VoxCadClass", "Tools", 0));
        menuDrawing->setTitle(QApplication::translate("VoxCadClass", "Drawing", 0));
        menuEdit->setTitle(QApplication::translate("VoxCadClass", "Edit", 0));
        FileToolBar->setWindowTitle(QApplication::translate("VoxCadClass", "File", 0));
        ViewtoolBar->setWindowTitle(QApplication::translate("VoxCadClass", "View", 0));
        DrawingtoolBar->setWindowTitle(QApplication::translate("VoxCadClass", "Draw", 0));
        DialogToolbar->setWindowTitle(QApplication::translate("VoxCadClass", "Dialogs", 0));
        SectionToolBar->setWindowTitle(QApplication::translate("VoxCadClass", "Section", 0));
    } // retranslateUi

};

namespace Ui {
    class VoxCadClass: public Ui_VoxCadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOXCAD_H
