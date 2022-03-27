#include "Circuit.h"
#include <stdlib.h>
#include <iostream>

Circuit::Circuit() {
	this->arrLen = 0;
}

void Circuit::SetLength(unsigned x) {
	this->length = x;
}

void Circuit::SetWeather(Weather w) {
	this->weather = w;
}

void Circuit::AddCar(Car* c) {
	this->carArr[arrLen] = c;
	this->arrLen++;
}

void Circuit::Race() {
	for (int i = 0; i < arrLen; i++) {
		double litersConsumed = (double)(carArr[i]->fuelConsumption / 100) * length;

		if (litersConsumed > carArr[i]->fuelCapacity)
			finishTime[i] = -1;

		else {
			finishTime[i] = (double)(length / carArr[i]->averageSpeed(weather));
		}
	}

	for(int i = 0; i< arrLen - 1; i++)
		for(int j = i + 1; j < arrLen; j++)
			if (finishTime[i] < finishTime[j]) {
				std::swap(finishTime[i], finishTime[j]);
			}
}

void Circuit::ShowFinalRanks() {
	for (int i = 0; i < arrLen; i++) {
		if (finishTime[i] != -1) {
			std::cout << finishTime[i] << "\n";
		}
	}
}

void Circuit::ShowWhoDidNotFinish() {
	int counter = 0;
	for (int i = arrLen - 1; i >= 0; i--, counter++) {
		if (finishTime[i] != -1)
			break;
	}
	std::cout << counter << " cars didn't finish";
}