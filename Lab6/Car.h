#pragma once
#include "Weather.h"

class Car {

public:
	unsigned fuelCapacity; // liters
	unsigned fuelConsumption; // liters/100km
	virtual unsigned averageSpeed(Weather w) { return 0; };
};