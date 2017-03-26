#include "stdafx.h"
#include "String.h"

String::String()
{
	setPointer("/0");
	setSize(0);
}

String::String(const char * str)
{
	setPointer(str);
	setSize(strlen(Pointer));
}

void String::setPointer(const char * newPointer)
{
	delete[] Pointer;

	Pointer = new char[strlen(newPointer) + 1];
	strcpy_s(Pointer, strlen(newPointer) + 1, newPointer);
}

void String::setSize(int newSize)
{
	Size = newSize;
}

char * String::getPointer() const
{
	return Pointer;
}

int String::getSize() const
{
	return Size;
}
