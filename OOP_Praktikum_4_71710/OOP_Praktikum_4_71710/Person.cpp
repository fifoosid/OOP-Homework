#include "stdafx.h"
#include "Person.h"

Person::Person(char * newName, char * newAdress, int newNumber)
{
	setName(newName);
	setAdress(newAdress);
	setNumber(newNumber);
}

Person::Person(const Person & person)
{
	setName(person.name);
	setAdress(person.adress);
	setNumber(person.number);
}

Person::~Person()
{
	delete[] name;
	delete[] adress;
}

void Person::operator=(const Person & person)
{
	setName(person.name);
	setAdress(person.adress);
	setNumber(person.number);
}

void Person::setName(char * newName)
{
	delete[] name;

	if (newName != nullptr)
	{
		if (strlen(newName) > 0)
		{
			name = new char[strlen(newName) + 1];
			strcpy_s(name, strlen(newName) + 1, newName);
		}
		else
		{
			name = new char[1];
			name = '\0';
		}
	}
	else
	{
		name = new char[1];
		name = '\0';
	}
}

void Person::setAdress(char * newAdress)
{
	delete[] adress;

	if (newAdress != nullptr)
	{
		if (strlen(newAdress) > 0)
		{
			adress = new char[strlen(newAdress) + 1];
			strcpy_s(adress, strlen(newAdress) + 1, newAdress);
		}
		else
		{
			adress = new char[1];
			adress = '\0';
		}
	}
	else
	{
		adress = new char[1];
		adress = '\0';
	}
}

void Person::setNumber(int newNumber)
{
	number = newNumber;
}

char * Person::getName() const
{
	return name;
}

char * Person::getAdress() const
{
	return adress;
}

int Person::getNumber() const
{
	return number;
}

ostream & operator<<(ostream & os, const Person & rhs)
{
	os << "Name: " << rhs.name << endl;
	os << "Adress: " << rhs.adress << endl;
	os << "Number: " << rhs.number << endl;
	return os;
}
