#pragma once

#include <iostream>
#include <string>

using namespace std;
class Person
{
private:
	char* name;
	char* adress;
	int number;

public:
	Person(char* newName, char* newAdress, int newNumber);
	Person(const Person& person);
	~Person();

	friend ostream& operator<<(ostream& os, const Person& rhs);
	void operator=(const Person& person);

	void setName(char* newName);
	void setAdress(char* newAdress);
	void setNumber(int newNumber);

	char* getName() const;
	char* getAdress() const;
	int getNumber() const;
};