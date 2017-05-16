// HW_71710_Praktikum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"
#include "Trailer.h"

int main()
{
	Vehicle veh{ "Filip", (long)9658745896,"VT", 7740,"BK", "VT 7740 BK", 12, January,1997 };
	Car opel{veh, Diesel, 100,2.0,4,Euro_4,Sedan };
	cout << opel.CalculateGO(20, 1.6) << endl;

    return 0;
}

