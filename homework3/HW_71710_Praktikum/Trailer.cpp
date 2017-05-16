#include "stdafx.h"
#include "Trailer.h"

Trailor::Trailor()
{
	axis = 0;
	maxMas = -1;
}

Trailor::Trailor(int newAxis, int newMaxMas)
{
	axis = newAxis;
	maxMas = newMaxMas;
}

Trailor::Trailor(const Trailor & trailor)
{
	axis = trailor.axis;
	maxMas = trailor.maxMas;
}

Trailor::~Trailor()
{
	axis = 0;
	maxMas = -1;
}

void Trailor::setAxis(int newAxis)
{
	axis = newAxis;
}

void Trailor::setMaxMas(int newMaxMas)
{
	maxMas = newMaxMas;
}

int Trailor::getAxis() const
{
	return axis;
}

int Trailor::getMaxMas() const
{
	return maxMas;
}
