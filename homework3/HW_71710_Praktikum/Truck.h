#pragma once

#include "Vehicle.h"
#include "Car.h"

enum TruckType {Not_assigned, Usual, Special, Trailor, Refrigerator};
class Truck : public Vehicle
{
private:
	EngineType engine;
	int horsePowers;
	double volume;
	int numberOfCilynders;
	EuroStandart standart;
	TruckType type;

public:
	Truck();
	Truck(EngineType newengine,
		int newhorsePowers,
		double newvolume,
		int newnumberOfCilynders,
		EuroStandart newstandart,
		TruckType newtype);
	Truck(const Truck& truck);
	~Truck();

	void setEngine(EngineType newEngine);
	void setHorsePowers(int newHorsePowers);
	void setVolume(double newVolume);
	void setNumberOfCilynders(int newNumberOfCilynders);
	void setStandart(EuroStandart newStandart);
	void setType(TruckType newType);

	char* getEngine() const;
	int getHorsePowers() const;
	double getVolume() const;
	int getNumberOfCilynders() const;
	char* getStandart() const;
	char* getType() const;

	double CalculateTax(double coefByRegion);
};