/*
 * Copyright 2010-2012 OpenXcom Developers.
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM_NEXTTURNSTATE_H
#define OPENXCOM_NEXTTURNSTATE_H

#include "../Engine/State.h"

namespace OpenXcom
{

class Window;
class Text;
class SavedBattleGame;
class BattlescapeState;

/**
 * Screen which announces the next turn.
 */
class NextTurnState : public State
{
private:
	Window *_window;
	Text *_txtTitle, *_txtTurn, *_txtSide, *_txtMessage;
	SavedBattleGame *_battleGame;
	BattlescapeState *_state;
public:
	/// Creates the Next Turn state.
	NextTurnState(Game *game, SavedBattleGame *battleGame, BattlescapeState *state);
	/// Cleans up the Next Turn state.
	~NextTurnState();
	/// Handler for clicking anything.
	void handle(Action *action);
};

}

#endif
