#pragma once
#include <iostream>
#include <cuchar>
#include <cstring>
#include "String.h"
#include "ServiceJob.h"
#include <string>

using namespace std;

enum class Car { Subaru, Volkswagen, Renault, Nissan, BMW, Not_assigned };
enum class ClientType {Private = 5, Firms = 6, Preferential = 10, None };

class ServiceEntry
{
private:
	String Name;
	int ID;
	Car CarBrand;
	String PlateNumber;
	ClientType Client;
	ServiceJob Repairs;

public:
	ServiceEntry();
	ServiceEntry(String newName, int newID, Car newCarBrand, ClientType newClient, ServiceJob newRepair);

	void setName(String newName);
	void sedID(int newID);
	void setCarBrand(Car newCarBrand);
	void setPlateNumber(const char* newPlateNumber);
	void setClient(ClientType newClient);
	void setRepairs(ServiceJob newRepairs);

	String getName() const;
	int getID() const;
	char* getCarBrand() const;
	char * getPlateNumber() const;
	char* getClient() const;
	char* getRepairs() const;

	double GetTotalPrice() ;

	void PrintInfo() ;











};