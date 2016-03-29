/*
    Copyright 2016 Jeffrey Thomas Piercy
  
    This file is part of Chimp Out!.

    Chimp Out! is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Chimp Out! is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CHIMPCHARACTER_H
#define CHIMPCHARACTER_H

#include "ChimpDefines.h"
#include "ChimpObject.h"
#include "ChimpMobile.h"

namespace chimp
{

class ChimpCharacter : public ChimpMobile
{
protected:
    int maxHealth, health, friends, enemies;
    
public:
    ChimpCharacter(const ChimpTile& til, SDL_Renderer* rend,
                   const int positionX, const int positionY, const int tilX, const int tilY, int maxH, Faction frnds,
                   Faction enms);
    
    int getHealth() const { return health; }
    void setHealth(const int heal) { health = heal; }
    inline int getFriends() const { return friends; }
    inline int getEnemies() const { return enemies; }
    
    void update(std::vector<std::unique_ptr<ChimpObject>>& objects);
};

} // namespace chimp

#endif // CHIMPCHARACTER_H
