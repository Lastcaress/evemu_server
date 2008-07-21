/*  EVEmu: EVE Online Server Emulator

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; version 2 of the License.
  
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY except by those people which sell it, which
  are required to give you total support for your newly bought product;
  without even the implied warranty of MERCHANTABILITY or FITNESS FOR
  A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
	
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef __SCENARIO_SERVICE_H_INCL__
#define __SCENARIO_SERVICE_H_INCL__

#include "../PyService.h"

#include "SystemDB.h"

class ScenarioService
: public PyService {
public:
	ScenarioService(PyServiceMgr *mgr, DBcore *db);
	virtual ~ScenarioService();

protected:
	class Dispatcher;
	Dispatcher *const m_dispatch;

	SystemDB m_db;

	PyCallable_DECL_CALL(ResetD)
	//PlayDungeon(dungeonVID, selectedRoom)
	//EditRoom(dungeonVID, selectedRoom)
	//GotoRoom(selectedRoom)
	//GetDunObjects() (returns list of slim items)
	//GetSelObjects() (returns list of slim items)
	//IsSelectedByObjID(dunObjectID)
	//DuplicateSelection(amount, X, Y, Z)
	//SetSelectionByID(ids)
	//SetSelectedRadius(minRadius, maxRadius)
	//SetRotate(y, p, r)
	//RotateSelected(yaw, pitch, roll)
	//JitterSelection(X, Y, Z)
	//ArrangeSelection(X, Y, Z)
	//DeleteSelected()
	//RefreshSelection()

	//overloaded in order to support bound objects:
	//virtual PyBoundObject *_CreateBoundObject(Client *c, const PyRep *bind_args);
};





#endif


