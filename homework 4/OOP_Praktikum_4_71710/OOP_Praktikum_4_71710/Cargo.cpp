#include "stdafx.h"
#include "Cargo.h"

Cargo::Cargo(TypeOfPallet newPalletType, Special newSpecialRequirements, Shipments & cargo) : Shipments(cargo)
{
	PalletType = newPalletType;
	SpecialRequirements = newSpecialRequirements;
}

Cargo::Cargo(const Cargo & cargo) : Shipments(cargo)
{
	PalletType = cargo.PalletType;
	SpecialRequirements = cargo.SpecialRequirements;
}

Cargo::~Cargo()
{

}
