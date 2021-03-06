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
#include "UnionVariable.h"

static QList<std::shared_ptr<Peony::Mount>> mountsList;

QList<std::shared_ptr<Peony::Mount> > *findList()
{
    return &mountsList;
}

static QList<std::shared_ptr<Peony::Volume>> volumesList;

QList<std::shared_ptr<Peony::Volume> > *findVolumeList()
{
    return &volumesList;
}

static QList<std::shared_ptr<Peony::Drive>> drivesList;

QList<std::shared_ptr<Peony::Drive> > *findDriveList()
{
    return &drivesList;
}

static QList<GMount *> gmountList;
QList<GMount *> *findGMountList()
{
    return &gmountList;
}

