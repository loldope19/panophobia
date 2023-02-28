#ifndef ROOMS_FLOOR_H
#define ROOMS_FLOOR_H

#include <iostream>

namespace rooms {

	class Floor {
	private:
		int nDecorNo;
		int nPlayerNo;

	public:
		Floor();
		Floor(int nPlayerNo);
	};
}

#endif // !ROOMS_FLOOR_H
