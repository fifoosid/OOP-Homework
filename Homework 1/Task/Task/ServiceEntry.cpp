#include "stdafx.h"
#include "ServiceEntry.h"

String ServiceEntry::getName() const
{
	return Name.getPointer();
}

int ServiceEntry::getID() const
{
	return ID;
}

char* PrintCarBrand(Car Brand)
{
	switch (Brand)
	{
	case Car::BMW: return "BMW"; break;
	case Car::Nissan: return "Nissan"; break;
	case Car::Renault: return "Renault"; break;
	case Car::Subaru: return "Subaru"; break;
	case Car::Volkswagen: return "Volkswagen"; break;
	default: return "Not Assigned"; break;
	}
}

char* ServiceEntry::getCarBrand() const
{
	return PrintCarBrand(this->CarBrand);
}

char * ServiceEntry::getPlateNumber() const
{
	return PlateNumber.getPointer();
}

char* PrintClient(ClientType client)
{
	switch (client)
	{
	case ClientType::Firms: return "Firms"; break;
	case ClientType::Preferential: return "Preferential"; break;
	case ClientType::Private: return "Private"; break;
	default: return "Normal"; break;
	}
}
char* ServiceEntry::getClient() const
{
	return PrintClient(this->Client);
}

char * ServiceEntry::getRepairs() const
{
	return Repairs.getRepairToChar();
}

double ServiceEntry::GetTotalPrice() 
{

	return Repairs.GetServiceJobPrice(Repairs) / (double)Client;
}

void ServiceEntry::PrintInfo() 
{
	cout << "Name: " << Name.getPointer() << endl;
	cout << "Identificator: " << ID << endl;
	cout << "Plate number: " << PlateNumber.getPointer() << endl;
	cout << "Car Brand: " << this->getCarBrand() << endl;
	cout << "Client Type: " << this->getClient() << endl;
	cout<< "Repairs: "<<endl;
	cout << "- " << Repairs.getRepair() <<": "<< Repairs.GetServiceJobPrice(Repairs) << endl;

}

ServiceEntry::ServiceEntry()
{
	Name.setPointer("/0");
	Name.setSize(0);

	ID = 0;

	CarBrand = Car::Not_assigned;

	Client = ClientType::None;

	Repairs.setRepairTime(0);
	Repairs.setRepair(RepairType::None);
}

ServiceEntry::ServiceEntry(String newName, int newID, Car newCarBrand, ClientType newClient, ServiceJob newRepair)
{
	Name.setPointer(newName.getPointer());
	Name.setSize(newName.getSize());

	ID = newID;

	CarBrand = newCarBrand;

	Client = newClient;

	Repairs = newRepair;
}

void ServiceEntry::setName(String newName)
{
	Name.setPointer(newName.getPointer());
	Name.setSize(newName.getSize());
}

void ServiceEntry::sedID(int newID)
{
	ID = newID;
}

void ServiceEntry::setCarBrand(Car newCarBrand)
{
	CarBrand = newCarBrand;
}

void ServiceEntry::setPlateNumber(const char * newPlateNumber)
{
	PlateNumber.setPointer(newPlateNumber);
	PlateNumber.setSize(strlen(newPlateNumber));
}

void ServiceEntry::setClient(ClientType newClient)
{
	Client = newClient;
}

void ServiceEntry::setRepairs(ServiceJob newRepairs)
{
	Repairs = newRepairs;
}
