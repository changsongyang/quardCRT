/*
 * This file is part of the https://github.com/QQxiaoming/quardCRT.git
 * project.
 *
 * Copyright (C) 2024 Quard <2014500726@smail.xtu.edu.cn>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */
#include "pluginviewerhomewidget.h"
#include "ui_pluginviewerhomewidget.h"

PluginViewerHomeWidget::PluginViewerHomeWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PluginViewerHomeWidget)
{
    ui->setupUi(this);
    retranslateUi();
}

PluginViewerHomeWidget::~PluginViewerHomeWidget() {
    delete ui;
}

void PluginViewerHomeWidget::retranslateUi(void) {
    ui->label->setText(QString("<html><head/><body><p align=\"center\">")+
        tr("Welcome to use")+
        QString("</p><p align=\"center\">")+
        tr("QuardCRT plugin system!")+
        QString("</p></body></html>"));
    ui->retranslateUi(this);
}

void PluginViewerHomeWidget::mousePressEvent(QMouseEvent *event) {
    static int count = 0;
    if(event->button() == Qt::LeftButton) {
        count++;
        if(count == 5) {
            count = 0;
        }
    }
}
