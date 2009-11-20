/*

                          Firewall Builder

                 Copyright (C) 2009 NetCitadel, LLC

  Author:  Vadim Kurland     vadim@fwbuilder.org

  $Id: FWCmdChange.h 1799 2009-11-18 03:33:57Z vadim $

  This program is free software which we release under the GNU General Public
  License. You may redistribute and/or modify this program under the terms
  of that license as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  To get a copy of the GNU General Public License, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

#ifndef FWCMDADDOBJECT_H
#define FWCMDADDOBJECT_H

#include "FWCmdChange.h"

/********************************************************
 * FWCmdAddObject
 ********************************************************/

class FWCmdAddObject : public FWCmdChange
{
    libfwbuilder::FWObject *member;
    bool require_complete_tree_reload;
protected:
    virtual void notify();

public:
    FWCmdAddObject(ProjectPanel *project,
                   libfwbuilder::FWObject *grp,
                   libfwbuilder::FWObject *member,
                   QString text=QString());
    ~FWCmdAddObject();
    void setNeedTreeReload(bool f) { require_complete_tree_reload = f; }
    virtual void redo();
    virtual void undo();
};

#endif
