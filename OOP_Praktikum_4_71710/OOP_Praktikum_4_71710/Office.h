#pragma once
#include "Person.h"
#include "Shipments.h"

class Office
{
private:
	static int ID;
	int IdentificationNumber;
	int sentShipments;
	int receivedShipments;

	Person* Registered;
	int registeredPeople;
	int peopleContainer;
	void ResizePeople();

	char* City;

	Shipments* shipment;
	int numberOfShipments;
	int shipmentsContainer;
	void ResizeShipments();

public:
	Office(int newSentShipments, int newReceivedShipments, Person* newRegistered, int newRegisteredPeople, int newPeopleContainer,
		 char* newCity, Shipments* newshipment, int newNumberOfShipments, int newShipmentsContainer);
	Office(const Office& office);
	~Office();

	void setCity(char* newCity);


};
int Office::ID = 1;