#include "Toyota.h"

Toyota::Toyota() {
	this->fuelCapacity = 55;
	this->fuelConsumption = 6;
}

unsigned Toyota::averageSpeed(Weather w) {
	if (w == Weather::Rain)
		return 60;
	if (w == Weather::Snow)
		return 40;
	return 100;
}