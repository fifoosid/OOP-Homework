#pragma once
#include <cstring>
#include <iostream>

using namespace std;

class String
{
private:
	char* Pointer;
	int Size;

public:
	String(char* str);
	String();
	String(char* newpointer, int newsize);
	~String();

	char* getPointer() const;
	int getSize() const;

	void setPointer(char* newPointer);
	void setSize(int newSize);

	const char* Str();

	void setString(String str);//Функция, която трябваше да напиша преди 20 минути



};