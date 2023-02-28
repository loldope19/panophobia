#ifndef ROOMS_ROOM_H
#define ROOMS_ROOM_H

#include <iostream>
#include "Floor.h"
#include "Wall.h"

namespace rooms {

	using namespace rooms;
	using namespace walls;

	class Room {
	//Attributes 
	protected:
		Wall CWall[4];
		Floor CFloor;
		int nRoomType;
		bool bHasLight;
		bool bGhostRoom;

	//Constructors
	public:
		Room();
		Room(Wall CWall[], Floor CFloor, bool bHasLight, int nRoomType);

	//Behaviors
	public:
		//Currently useless
		void spawnGhost(bool bGhostRoom);
	};
}

#endif // !ROOMS_ROOM_H
