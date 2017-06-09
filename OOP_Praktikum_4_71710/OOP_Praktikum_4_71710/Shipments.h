#pragma once
#include "Person.h"

enum TypeOfShipment{Usual, Fast, Express};
class Shipments
{
private:
	Person Sender;
	Person Receiver;
	TypeOfShipment Type;
	static int ID;
	int ShipmentID;

public:
	Shipments(Person newSender, Person newReceiver,
		TypeOfShipment newType);
	Shipments(const Shipments& ship);
	~Shipments();

	const char* PrintType(TypeOfShipment ntype) const
	{
		switch (ntype)
		{
		case Usual: return "Usual"; break;
		case Fast: return "Fast"; break;
		case Express: return "Express"; break;
		default: return "None"; break;
		}
	}

	virtual void printInfo() const
	{
		cout << "Sender: " << endl << Sender << endl;
		cout << "Receiver: " << endl << Receiver << endl;
		cout << "Type of shipment: " << PrintType(Type) << endl;
		cout << "ID" << ShipmentID << endl;
	}
	virtual double CalculatePrice(TypeOfShipment type) const = 0;
};
