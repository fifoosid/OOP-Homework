#include "stdafx.h"
#include "String.h"
//нещо се бърка тук
String::String(char* str)
{
	if (Pointer != nullptr)
	{
		delete[] Pointer;
	}
	if (str)
	{
		if (strlen(str) != 0)
		{
			Pointer = new char[strlen(str) + 1];
			strcpy_s(Pointer, strlen(str) + 1, str);
			this->Size = strlen(str) + 1;
		}
		else
		{
			Pointer = new char[1];
			Pointer = '\0';
			this->Size = 1;
		}
	}
	else
	{
		Pointer = new char[1];
		Pointer = '\0';
	}
}

String::String()
{
	delete[] Pointer;

	Pointer = new char[1];
	Pointer = '\0';
}

String::String(char * newpointer, int newsize)
{
	setPointer(newpointer);
	setSize(newsize);
}

String::~String()
{
	delete[] Pointer;
	Size = 0;
}

char* String::getPointer() const
{
	if (Pointer != nullptr)
	{
		return Pointer;
	}
	else
	{
		cout << "Trying to get null pointer" << endl;
	}
}


int String::getSize() const
{
	return strlen(Pointer);
}

void String::setPointer(char* newPointer)
{
	if (newPointer != nullptr)
	{
		if (strlen(newPointer) != 0)
		{
			Pointer = new char[strlen(newPointer) + 1];
			strcpy_s(Pointer, strlen(newPointer) + 1, newPointer);
			this->Size = strlen(newPointer) + 1;
		}
	}
	else
	{
		cout << "Trying to set null pointer" << endl;
	}
}

void String::setSize(int newSize)
{
	Size = newSize;
}

const char* String::Str()
{
	return Pointer;
}

void String::setString(String str)
{
	this->setPointer(str.getPointer());
	this->setSize(str.getSize());
}


