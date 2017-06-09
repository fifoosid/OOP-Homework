#include "stdafx.h"
#include "Shipments.h"

int Shipments::ID = 0;

Shipments::Shipments(Person newSender, Person newReceiver, TypeOfShipment newType)
	: Sender(newSender), Receiver(newReceiver)
{
	Type = newType;
	ID++;
	ShipmentID = ID;
}

Shipments::Shipments(const Shipments & ship) : Sender(ship.Sender), Receiver(ship.Receiver)
{
	Type = ship.Type;
	ShipmentID = ship.ShipmentID;
}

Shipments::~Shipments()
{
	
}



