#include "stdafx.h"
#include "Vehicle.h"


/*
Vehicle::Vehicle()
{
	Name.setPointer(nullptr);
	Name.setSize(0);
	EGN = -1;
	RegionCode.setPointer(nullptr);
	RegionCode.setSize(0);
	PlateNumber = -1;
	PlateSeries.setPointer(nullptr);
	PlateSeries.setSize(0);
	Plate.setPointer(nullptr);
	Plate.setSize(0);
	Day = 0;
	month = Not_Assigned;
	Year = 0;

}
*/
Vehicle::Vehicle(String newName, long newEGN, String newRegionCode, int newPlateNumber, String newPlateSeries, String newPlate, int newDay, Month newmonth, int newYear)
{
	Name.setPointer(newName.getPointer());
	Name.setSize(newName.getSize());
	EGN = newEGN;
	RegionCode.setPointer(newRegionCode.getPointer());
	RegionCode.setSize(newRegionCode.getSize());
	PlateNumber = newPlateNumber;
	PlateSeries.setPointer(newPlateSeries.getPointer());
	PlateSeries.setSize(newPlateSeries.getSize());
	Plate.setPointer(newPlate.getPointer());
	Plate.setSize(newPlate.getSize());
	Day = newDay;
	month = newmonth;
	Year = newYear;








}

Vehicle::Vehicle(const Vehicle & veh)
{
	Name.setString(veh.Name);
	EGN = veh.EGN;
	RegionCode.setString(veh.RegionCode);
	PlateNumber = veh.PlateNumber;
	PlateSeries.setString(veh.PlateSeries);
	Plate.setString(veh.Plate);
	Day = veh.Day;
	month = veh.month;
	Year = veh.Year;
}

Vehicle::~Vehicle()
{
	Name.~String();
	EGN = -1;
	RegionCode.~String();
	PlateNumber = 0;
	PlateSeries.~String();
	Plate.~String();
	Day = 0;
	month = Not_Assigned;
	Year = 0;
}

void Vehicle::setName(String newName)
{
	Name.setString(newName);
}

void Vehicle::setEGN(long newEGN)
{
	EGN = newEGN;
}

void Vehicle::setRegionCode(String newRegionCode)
{
	RegionCode.setString(newRegionCode);
}

void Vehicle::setPlateNumber(int newPlateNumber)
{
	PlateNumber = newPlateNumber;
}

void Vehicle::setPlateSeries(String newPlateSeries)
{
	PlateSeries.setString(newPlateSeries);
}

void Vehicle::setPlate(String newPlate)
{
	Plate.setString(newPlate);
}

void Vehicle::setDay(int newDay)
{
	Day = newDay;
}

void Vehicle::setMonth(Month newMonth)
{
	month = newMonth;
}

void Vehicle::setYear(int newYear)
{
	Year = newYear;
}

char * Vehicle::getName() const
{
	return Name.getPointer();
}

long Vehicle::getEGN() const
{
	return EGN;
}

char * Vehicle::getRegionCode() const
{
	return RegionCode.getPointer();
}

int Vehicle::getPlateNumber() const
{
	return PlateNumber;
}

char * Vehicle::getPlateSeries() const
{
	return PlateSeries.getPointer();
}

char * Vehicle::getPlate() const
{
	return Plate.getPointer();
}

int Vehicle::getDay() const
{
	return Day;
}

char* PrintMonth(Month mon)
{
	switch (mon)
	{
	case January: return "January"; break;
	case February: return "February"; break;
	case March: return "March"; break;
	case April: return "April"; break;
	case May: return "May"; break;
	case June: return "June"; break;
	case July: return "July"; break;
	case August: return "August"; break;
	case September: return "September"; break;
	case October: return "October"; break;
	case November: return "November"; break;
	case December: return "December"; break;
	default: return "Not Assigned";
	}
}

char * Vehicle::getMonth() const
{
	return PrintMonth(month);
}

Month Vehicle::getMonth(int a) const
{
	return this->month;
}

int Vehicle::getYear() const
{
	return Year;
}

double Vehicle::CalculateGO(int age, double coefByRegion)
{
	int taxByAge;
	if (age < 30)
	{
		taxByAge = 40;
	}
	else if (age < 40)
	{
		taxByAge = 30;
	}
	else
	{
		taxByAge = 20;
	}

	return (50 + taxByAge) * coefByRegion;
}


Month setMonthByChar(char* mon)
{
	if (mon == "January")
	{
		return January;
	}
	else if (mon == "February")
	{
		return February;
	}
	else if (mon == "March")
	{
		return March;
	}
	else if (mon == "April")
	{
		return April;
	}
	else if (mon == "May")
	{
		return May;
	}
	else if (mon == "June")
	{
		return June;
	}
	else if (mon == "July")
	{
		return July;
	}
	else if (mon == "August")
	{
		return August;
	}
	else if (mon == "September")
	{
		return September;
	}
	else if (mon == "October")
	{
		return October;
	}
	else if (mon == "November")
	{
		return November;
	}
	else if (mon == "December")
	{
		return December;
	}
	else return Not_Assigned;
}

void Vehicle::setMonth(char * newmonth)
{
	this->month = setMonthByChar(newmonth);
}
