/*
 * Copyright (C) 2019 Tianjin KYLIN Information Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/&gt;.
 *
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtWidgets>
#include <QLabel>
#include <QPushButton>
#include "qclickwidget.h"
#include "UnionVariable.h"
#include "ejectInterface.h"
#include <QSystemTrayIcon>
#include <QIcon>
#include <QProcess>

namespace Ui {
class MainWindow;
}

//struct UMount
//{
//    QString id;
//    int count;
//};

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    void getDeviceInfo();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void getDisConnectErrorMessage();
    void getConnectErrorMessage();
//    static int oneVolumeDriveNum;
//    static int twoVolumeDriveNum;
//    static int threeVolumeDriveNum;
//    static int fourVolumeDriveNum;
//    static int hign;

private:
    Ui::MainWindow *ui;
    QVBoxLayout *vboxlayout;
    //QHBoxLayout *hboxlayout;
    QLabel *no_device_label;
    QPushButton *eject_image_button;
    void newarea(int No,
                 QString Drivename,
                 QString nameDis1,
                 QString nameDis2,
                 QString nameDis3,
                 QString nameDis4,
                 qlonglong capacityDis1,
                 qlonglong capacityDis2,
                 qlonglong capacityDis3,
                 qlonglong capacityDis4,
                 QString pathDis1,
                 QString pathDis2,
                 QString pathDis3,
                 QString pathDis4,
                 int linestatus);
    void moveBottomRight();
    QString size_human(qlonglong capacity);
    void MainWindowShow();
private:
    QSystemTrayIcon *m_systray;
    QIcon iconSystray;
    //void initUi();
    QString UDiskPathDis1;
    QString UDiskPathDis2;
    QString UDiskPathDis3;
    QString UDiskPathDis4;
    quint64 totalDis1;
    quint64 totalDis2;
    quint64 totalDis3;
    quint64 totalDis4;
    QClickWidget *open_widget;
    int hign;

public Q_SLOTS:
    void iconActivated(QSystemTrayIcon::ActivationReason reason);
    int getPanelPosition(QString str);
    int getPanelHeight(QString str);
    void eject_drive();
Q_SIGNALS:
    void clicked();

protected:
    void resizeEvent(QResizeEvent *event);
};

#endif
