#include "stdafx.h"
#include "Truck.h"

Truck::Truck()
{
	engine = NoInfo;
	horsePowers = -1;
	volume = 0;
	numberOfCilynders = -1;
	standart = noinfo;
	type = Not_assigned;
}

Truck::Truck(EngineType newengine, int newhorsePowers, double newvolume, int newnumberOfCilynders, EuroStandart newstandart, TruckType newtype)
{
	engine = newengine;
	horsePowers = newhorsePowers;
	volume = newvolume;
	numberOfCilynders = newnumberOfCilynders;
	standart = newstandart;
	type = newtype;
}

Truck::Truck(const Truck & truck) : Vehicle()
{
	engine = truck.engine;
	horsePowers = truck.horsePowers;
	volume = truck.volume;
	numberOfCilynders = truck.numberOfCilynders;
	standart = truck.standart;
	type = truck.type;
}

Truck::~Truck()
{
	engine = NoInfo;
	horsePowers = -1;
	volume = 0;
	numberOfCilynders = -1;
	standart = noinfo;
	type = Not_assigned;
}

void Truck::setEngine(EngineType newEngine)
{
	engine = newEngine;
}

void Truck::setHorsePowers(int newHorsePowers)
{
	horsePowers = newHorsePowers;
}

void Truck::setVolume(double newVolume)
{
	volume = newVolume;
}

void Truck::setNumberOfCilynders(int newNumberOfCilynders)
{
	numberOfCilynders = newNumberOfCilynders;
}

void Truck::setStandart(EuroStandart newStandart)
{
	standart = newStandart;
}

void Truck::setType(TruckType newType)
{
	type = newType;
}



char * Truck::getEngine() const
{
	return printEngine(engine);
}

int Truck::getHorsePowers() const
{
	return horsePowers;
}

double Truck::getVolume() const
{
	return volume;
}

int Truck::getNumberOfCilynders() const
{
	return numberOfCilynders;
}

char * Truck::getStandart() const
{
	return printEuroStandart(standart);
}

char* printTruckType(TruckType Type)
{
	switch (Type)
	{
	case Usual: return "Usual"; break;
	case Special: return "Special"; break;
	case Trailor: return "Trailor"; break;
	case Refrigerator: return "Refrigerator"; break;
	default: return "No Information"; break;
	}
}

char * Truck::getType() const
{
	return printTruckType(type);
}

double Truck::CalculateTax(double coefByRegion)
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
