#pragma once
#include "Vehicle.h"
#include "Car.h"// За да използваме създадените enum класове
enum TypeOfMotorcycles {Sport, Tourist, Cruiser, Chopper, Cross};

class Motorcycle : public Vehicle
{
private:
	EngineType engine;
	int horsePowers;
	double volume;
	int numberOfCilynders;
	EuroStandart standart;
	TypeOfMotorcycles type;

public:
	Motorcycle();
	Motorcycle(EngineType newengine,
		int newhorsePowers,
		double newvolume,
		int newnumberOfCilynders,
		EuroStandart newstandart);
	Motorcycle(const Motorcycle& motor);
	~Motorcycle();

	void setEngine(EngineType newEngine);
	void setHorsePowers(int newHorsePowers);
	void setVolume(double newVolume);
	void setNumberOfCilynders(int newNumberOfCilynders);
	void setStandart(EuroStandart newStandart);
	void setType(TypeOfMotorcycles newType);

	char* getEngine() const;
	int getHorsePowers() const;
	double getVolume() const;
	int getNumberOfCilynders() const;
	char* getStandart() const;
	char* getType() const;

	double CalculateTaxM(double coefByRegion);
};