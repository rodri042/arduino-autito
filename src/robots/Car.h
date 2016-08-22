#ifndef SRC_ROBOTS_CAR_H_
#define SRC_ROBOTS_CAR_H_

	#include "Config.h"
	#include "../utils/globals.h"
	#include "WheelPair.h"

	namespace robots {
		class Car {
			// ----
			public:
			// ----
			Car(Config config);
			virtual ~Car();

			void setSpeed(int speed);
			void setDirection(int direction);

			// -----
			private:
			// -----

			WheelPair* frontWheelPair;
			WheelPair* backWheelPair;
		};
	}

#endif
