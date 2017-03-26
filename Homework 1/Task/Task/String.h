#pragma once
#include <iostream>
#include <cuchar>
#include <cstring>

using namespace std;


class String
{
private:
	char *Pointer;
	int Size;

public:
	String();
	String(const char* str);

	void setPointer(const char *newPointer0);
	void setSize(int newSize);

	char* getPointer() const;
	int getSize() const;

};