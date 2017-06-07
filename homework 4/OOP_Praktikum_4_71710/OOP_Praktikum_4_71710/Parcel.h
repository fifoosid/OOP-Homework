#pragma once
#include"Shipments.h"


class Parcel : public Shipments//Колет
{
private:
	double weight;//в грамове
	double Value;
	int SizeA;//височина
	int SizeB;//дължина
	int SizeC;//широчина

	

public:
	Parcel(double newWeight, double newPrice,
		int newSizeA, int newSizeB, int newSizeC, Shipments& ship);
	Parcel(const Parcel& parcel);
	~Parcel();

	void setWeight(double newWeight);
	void setValue(double newValue);
	void setSizeA(int newSizeA);
	void setSizeB(int newSizeB);
	void setSizeC(int newSizeC);

	void printInfo() const final
	{
		Shipments::printInfo();
		cout << "Weight of parcel: " << weight << endl;
		cout << "Value of the parcel: " << Value << endl;
		cout << "Dimensions: " << SizeA << "/" << SizeB << "/" << SizeC << endl;
	}

	double CalculatePrice(TypeOfShipment type) const final
	{
		double VolumePrice = (SizeA * SizeB * SizeC) / 6000;
		double WeightPrice = weight / 500;
		double Taxes = 1 / 100 * Value;
		
		if (!strcmp(PrintType(type), "Usual"))
		{
			return VolumePrice + WeightPrice + Taxes;
		}
		else if (!strcmp(PrintType(type), "Fast"))
		{
			return (VolumePrice + WeightPrice + Taxes) * 1.1;
		}
		else if (!strcmp(PrintType(type), "Express"))
		{
			return (VolumePrice + WeightPrice + Taxes) * 1.2;
		}
		//не гледаме за default-ния случай, тъй като ако няма пратка, няма каква цена да смятаме
	}


};