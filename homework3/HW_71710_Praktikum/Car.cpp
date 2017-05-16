#include "stdafx.h"
#include "Car.h"

Car::Car() : Vehicle()
{
	engine = NoInfo;
	horsePowers = 0;
	volume = 0;
	numberOfCylinders = 0;
	standart = noinfo;
	type = Noinfo;


}

Car::Car(Vehicle info, EngineType newengine, int newhorsePowers, double newvolume, int newnumberOfCylinders, EuroStandart newstandart, TypeOfCoupe newtype) : Vehicle()
{
	this->setName(info.getName());
	this->setEGN(info.getEGN());
	this->setRegionCode(info.getRegionCode());
	this->setPlateNumber(info.getPlateNumber());
	this->setPlateSeries(info.getPlateSeries());
	this->setPlate(info.getPlate());
	this->setDay(info.getDay());
	this->setMonth(info.getMonth(1));
	this->setYear(info.getYear());

	engine = newengine;
	horsePowers = newhorsePowers;
	volume = newvolume;
	numberOfCylinders = newnumberOfCylinders;
	standart = newstandart;
	type = newtype;
}

Car::Car(const Car & car) : Vehicle()
{
	engine = car.engine;
	horsePowers = car.horsePowers;
	volume = car.volume;
	numberOfCylinders = car.numberOfCylinders;
	standart = car.standart;
	type = car.type;
}

Car::~Car()
{
	engine = NoInfo;
	horsePowers = -1;
	volume = 0;
	numberOfCylinders = -1;
	standart = noinfo;
	type = Noinfo;
}

void Car::setEngine(EngineType newengine)
{
	engine = newengine;
}

void Car::setHorsePowers(int newHorsePowers)
{
	horsePowers = newHorsePowers;
}

void Car::setVolume(double newVolume)
{
	volume = newVolume;
}

void Car::setNumberOfCylinders(int newnumbersOfCylinders)
{
	numberOfCylinders = newnumbersOfCylinders;
}

void Car::setStandart(EuroStandart newEuroStandart)
{
	standart = newEuroStandart;
}

void Car::setType(TypeOfCoupe newtype)
{
	type = newtype;
}

char* printEngine(EngineType engine)
{
	switch (engine)
	{
	case Gas: return "Gas"; break;
	case Petrol: return "Petrol"; break;
	case Diesel: return "Diesel"; break;
	default: return "No Info"; break;
	}
}

char * Car::getEngine() const
{
	return printEngine(engine);
}

int Car::getHorsePowers() const
{
	return horsePowers;
}

double Car::getVolume() const
{
	return volume;
}

int Car::getNumberOfCylinders() const
{
	return numberOfCylinders;
}

char* printEuroStandart(EuroStandart eurostandart)
{
	switch (eurostandart)
	{
	case Euro_1: return "Euro 1"; break;
	case Euro_2: return "Euro 2"; break;
	case Euro_3: return "Euro 3"; break;
	case Euro_4: return "Euro 4"; break;
	case Euro_5: return "Euro 5"; break;
	case Euro_6: return "Euro 6"; break;
	default: return "No Info"; break;
	}
}

char * Car::getStandart() const
{
	return printEuroStandart(standart);
}

char* printType(TypeOfCoupe Type)
{
	switch (Type)
	{
	case SUV: return "SUV"; break;
	case Sedan: return "Sedan"; break;
	case Hatchback: return "Hatchback"; break;
	case Liftback: return "Liftback"; break;
	case Cabrio: return "Cabrio"; break;
	default: return "No Info"; break;
	}
}

char * Car::getType() const
{
	return nullptr;
}

double Car::CalculateTaxC(double coefByRegion)
{
	int tax = 10;
	if (horsePowers > 100)
	{
		tax = 100;
	}

	return (tax + horsePowers) * coefByRegion;
}
