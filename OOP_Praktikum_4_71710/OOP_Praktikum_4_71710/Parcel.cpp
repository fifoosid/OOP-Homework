#include "stdafx.h"
#include "Parcel.h"

Parcel::Parcel(double newWeight, double newPrice, int newSizeA, int newSizeB, int newSizeC, Shipments& ship) : Shipments(ship)
{
	weight = newWeight;
	Value = newPrice;
	setSizeA(newSizeA);
	setSizeB(newSizeB);
	setSizeC(newSizeC);
}

Parcel::Parcel(const Parcel& parcel) : Shipments(parcel)
{
	weight = parcel.weight;
	Value = parcel.Value;
	setSizeA(parcel.SizeA);
	setSizeB(parcel.SizeB);
	setSizeC(parcel.SizeC);
}

Parcel::~Parcel()
{

}

void Parcel::setWeight(double newWeight)
{
	weight = newWeight;
}

void Parcel::setValue(double newValue)
{
	Value = newValue;
}

void Parcel::setSizeA(int newSizeA)
{
	if (newSizeA < 40)
	{
		SizeA = 40;
	}
	else
	{
		SizeA = newSizeA;
	}
}

void Parcel::setSizeB(int newSizeB)
{
	if (newSizeB < 40)
	{
		SizeB = 40;
	}
	else
	{
		SizeB = newSizeB;
	}
}

void Parcel::setSizeC(int newSizeC)
{
	if (newSizeC < 40)
	{
		SizeC = 40;
	}
	else
	{
		SizeC = newSizeC;
	}
}
