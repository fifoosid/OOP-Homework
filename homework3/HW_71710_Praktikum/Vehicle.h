#pragma once

#include "String.h"
#include <string.h>
enum Month {Not_Assigned, January, February, March, April, May, June, July, August, September, October, November, December};
class Vehicle
{
private:
	String Name;
	long EGN;
	String RegionCode;
	int PlateNumber;
	String PlateSeries;
	String Plate;
	int Day;
	Month month;
	int Year;

public:
	//Vehicle();
	Vehicle(String newName = "No name",
		long newEGN = 0,
		String newRegionCode = "N/A",
		int newPlateNumber = 0,
		String newPlateSeries = "N/A",
		String newPlate = "N/A",
		int newDay = -1,
		Month newmonth = Not_Assigned,
		int newYear = 0);
	Vehicle(const Vehicle& veh);
	~Vehicle();

	void setName(String newName);
	void setEGN(long newEGN);
	void setRegionCode(String newRegionCode);
	void setPlateNumber(int newPlateNumber);
	void setPlateSeries(String newPlateSeries);
	void setPlate(String newPlate);
	void setDay(int newDay);
	void setMonth(Month newMonth);
	void setYear(int newYear);

	char* getName() const;
	long getEGN() const;
	char* getRegionCode() const;
	int getPlateNumber() const;
	char* getPlateSeries() const;
	char* getPlate() const;
	int getDay() const;
	char* getMonth() const;
	Month getMonth(int a) const;
	int getYear() const;

	double CalculateGO(int age, double coefByRegion);

	void setMonth(char* newmonth);
};