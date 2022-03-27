#include "Dacia.h"

Dacia::Dacia() {
	this->fuelCapacity = 40;
	this->fuelConsumption = 5;
};

unsigned Dacia::averageSpeed(Weather w) {
	if (w == Weather::Rain)
		return 50;
	if (w == Weather::Snow)
		return 40;
	return 80;
}
