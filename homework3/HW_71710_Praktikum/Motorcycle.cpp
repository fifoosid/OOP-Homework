#include "stdafx.h"
#include "Motorcycle.h"

Motorcycle::Motorcycle()
{
	engine = NoInfo;
	horsePowers = -1;
	volume = 0;
	numberOfCilynders = -1;
	standart = noinfo;

}

Motorcycle::Motorcycle(EngineType newengine, int newhorsePowers, double newvolume, int newnumberOfCilynders, EuroStandart newstandart)
{
	engine = newengine;
	horsePowers = newhorsePowers;
	volume = newvolume;
	numberOfCilynders = newnumberOfCilynders;
	standart = newstandart;
}

Motorcycle::Motorcycle(const Motorcycle & motor)
{
	engine = motor.engine;
	horsePowers = motor.horsePowers;
	volume = motor.volume;
	numberOfCilynders = motor.numberOfCilynders;
	standart = motor.standart;
}

Motorcycle::~Motorcycle()
{
	engine = NoInfo;
	horsePowers = -1;
	volume = 0;
	numberOfCilynders = -1;
	standart = noinfo;
}

void Motorcycle::setEngine(EngineType newEngine)
{
	engine = newEngine;
}

void Motorcycle::setHorsePowers(int newHorsePowers)
{
	horsePowers = newHorsePowers;
}

void Motorcycle::setVolume(double newVolume)
{
	volume = newVolume;
}

void Motorcycle::setNumberOfCilynders(int newNumberOfCilynders)
{
	numberOfCilynders = newNumberOfCilynders;
}

void Motorcycle::setStandart(EuroStandart newStandart)
{
	standart = newStandart;
}

void Motorcycle::setType(TypeOfMotorcycles newType)
{
	type = newType;
}

char * Motorcycle::getEngine() const
{
	return printEngine(engine);
}

int Motorcycle::getHorsePowers() const
{
	return horsePowers;
}

double Motorcycle::getVolume() const
{
	return volume;
}

int Motorcycle::getNumberOfCilynders() const
{
	return numberOfCilynders;
}

char * Motorcycle::getStandart() const
{
	return printEuroStandart(standart);
}

char* printTypeOfMotorcycle(TypeOfMotorcycles Type)
{
	switch (Type)
	{
	case Sport: return "Sport"; break;
	case Chopper: return "Chopper"; break;
	case Tourist: return "Tourist"; break;
	case Cruiser: return "Cruiser"; break;
	case Cross: return "Cross"; break;
	default: return "No Info"; break;
	}
}

char * Motorcycle::getType() const
{
	return printTypeOfMotorcycle(type);
}

double Motorcycle::CalculateTaxM(double coefByRegion)
{
	int tax = 0;
	if (horsePowers < 101)
	{
		tax = 10;
	}
	else
	{
		tax = 100;
	}

	return (tax + horsePowers) * coefByRegion;
}
