#pragma once
#include "Vehicle.h"

enum EngineType {NoInfo, Diesel, Gas, Petrol};
enum EuroStandart {noinfo, Euro_1, Euro_2, Euro_3, Euro_4, Euro_5, Euro_6};
enum TypeOfCoupe {Noinfo, SUV, Sedan, Hatchback, Cabrio, Liftback};

class Car : public Vehicle
{
private:
	EngineType engine;
	int horsePowers;
	double volume;
	int numberOfCylinders;
	EuroStandart standart;
	TypeOfCoupe type;

public:
	Car();
	Car(Vehicle info,
		EngineType newengine,
		int newhorsePowers,
		double newvolume,
		int newnumberOfCylinders,
		EuroStandart newstandart,
		TypeOfCoupe newtype);
	Car(const Car& car);
	~Car();

	void setEngine(EngineType newengine);
	void setHorsePowers(int newHorsePowers);
	void setVolume(double newVolume);
	void setNumberOfCylinders(int newnumbersOfCylinders);
	void setStandart(EuroStandart newEuroStandart);
	void setType(TypeOfCoupe newtype);

	char* getEngine() const;
	int getHorsePowers() const;
	double getVolume() const;
	int getNumberOfCylinders() const;
	char* getStandart() const;
	char* getType() const;

	double CalculateTaxC(double coefByRegion);

};
char* printEngine(EngineType engine);
char* printEuroStandart(EuroStandart eurostandart);