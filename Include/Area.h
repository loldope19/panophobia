#ifndef AREAS_AREA_H
#define AREAS_AREA_H

#include <iostream>

namespace areas {

	class Area {
	//Attributes
	private:
		int nRoomTotal;

	//Constructors
	public:
		Area(int nRoomTotal);

	//Behaviors
	public:
		void createRooms(int nRoomTotal);

	//Getters and Setters
	public:
		//Currently useless
		void setGhostRoom(int nRoomIndex);
	};
}

#endif // !AREAS_AREA_H
