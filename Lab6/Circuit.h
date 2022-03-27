#include "Car.h"

class Circuit {
	unsigned length;
	Weather weather;
	Car *carArr[50];
	double finishTime[50];
	unsigned arrLen;

public:
	Circuit();
	void SetLength(unsigned x);
	void SetWeather(Weather w);
	void AddCar(Car* c);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};
