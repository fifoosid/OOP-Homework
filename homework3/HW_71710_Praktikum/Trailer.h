#pragma once

#include "Vehicle.h"

class Trailor : public Vehicle
{
private:
	int axis;
	int maxMas;

public:
	Trailor();
	Trailor(int newAxis,
		int newMaxMas);
	Trailor(const Trailor& trailor);
	~Trailor();

	void setAxis(int newAxis);
	void setMaxMas(int newMaxMas);

	int getAxis() const;
	int getMaxMas() const;
};