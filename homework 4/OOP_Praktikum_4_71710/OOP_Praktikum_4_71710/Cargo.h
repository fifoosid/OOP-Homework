#pragma once
#include "Shipments.h"

enum TypeOfPallet {Mini, Euro, Industrial};
enum Special {Fragile, Cold, Hot, None};

class Cargo : public Shipments
{
private:
	TypeOfPallet PalletType;
	Special SpecialRequirements;

public:
	Cargo(TypeOfPallet newPalletType, Special newSpecialRequirements, Shipments& cargo);
	Cargo(const Cargo& cargo);
	~Cargo();

	char* getSpecial(Special type) const
	{
		switch (type)
		{
		case Special::Cold: return "Cold";
		case Special::Fragile: return "Fragile";
		case Special::Hot: return "Hot";
		default: return "None";
		}
	}

	char* getPalletType(TypeOfPallet type) const
	{
		switch (type)
		{
		case TypeOfPallet::Euro: return "Euro";
		case TypeOfPallet::Mini: return "Mini";
		case TypeOfPallet::Industrial: return "Industrial";
		}
	}

	void printInfo() const final
	{
		Shipments::printInfo();
		cout << "Type of pallet: " << getPalletType(PalletType) << endl;
		cout << "Special requirement: " << getSpecial(SpecialRequirements) << endl;
	}

	double CalculatePrice(TypeOfShipment type) const final
	{
		double price;
		if (!strcmp(getPalletType(PalletType), "Mini"))
		{
			price = 50;
		}
		else if (!strcmp(getPalletType(PalletType), "Euro"))
		{
			price = 75;
		}
		else if (!strcmp(getPalletType(PalletType), "Industrial"))
		{
			price = 200;
		}

		if (strcmp(getSpecial(SpecialRequirements), "None"))
		{
			price *= 1.5;
		}

		if (!strcmp(PrintType(type), "Fast"))
		{
			return price * 1.3;
		}
		else if (!strcmp(PrintType(type), "Express"))
		{
			return price * 1.5;
		}
		else
		{
			return price;
		}

	}


};