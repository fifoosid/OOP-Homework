#include "stdafx.h"
#include "Office.h"

void Office::ResizePeople()
{
	Person temp = new Person[peopleContainer * 2];
	for (size_t i = 0; i < registeredPeople; i++)
	{
		temp[i] = Registered[i];
	}
}

void Office::ResizeShipments()
{
	Shipments* temp = new Shipments[shipmentsContainer * 2];
	for (size_t i = 0; i < numberOfShipments; i++)
	{
		temp[i] = shipment[i];
	}
	delete[] shipment;
	shipment = temp;

	shipmentsContainer *= 2;
}

Office::Office(int newSentShipments, int newReceivedShipments, Person* newRegistered, int newRegisteredPeople, int newPeopleContainer,
	char* newCity, Shipments* newshipment, int newNumberOfShipments, int newShipmentsContainer)
{
	IdentificationNumber = ID;
	ID++;
	sentShipments = newSentShipments;
	receivedShipments = newReceivedShipments;
	registeredPeople = newRegisteredPeople;
	for (size_t i = 0; i < registeredPeople; i++)
	{
		Registered[i] = newRegistered[i];
	}
	setCity(newCity);

	numberOfShipments = newNumberOfShipments;
	for (size_t i = 0; i < numberOfShipments; i++)
	{		
		shipment[i] = newshipment[i];
	}
}

Office::Office(const Office & office)
{
	IdentificationNumber = ID;
	ID++;
	sentShipments = office.sentShipments;
	receivedShipments = office.receivedShipments;
	registeredPeople = office.registeredPeople;
	for (size_t i = 0; i < registeredPeople; i++)
	{
		Registered[i] = office.Registered[i];
	}
	setCity(office.City);
}

Office::~Office()
{
	ID--;
}

void Office::setCity(char * newCity)
{
	delete[] City;
	
	int size = strlen(newCity) + 1;
	if (size > 1)
	{
		City = new char[size];
		strcpy_s(City, size, newCity);
	}
	else
	{
		City = new char[1];
		City = '\0';
	}
}
