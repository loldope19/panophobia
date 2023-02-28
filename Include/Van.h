#ifndef ROOMS_VAN_H
#define ROOMS_VAN_H

#include "Room.h"

namespace rooms {
	using namespace rooms;

	class Van : public Room {
	private:
		bool bVanLocked;
		int nSanityMonitor[4];
		int nAvgSanity;

	public:
		Van(bool bToggleHunt, int nSanityMonitor[]);

	public:
		void setLock(bool bVanLocked);
	};
}

#endif // !ROOMS_VAN_H
	