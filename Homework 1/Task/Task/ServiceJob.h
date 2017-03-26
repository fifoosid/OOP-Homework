#pragma once
#include <iostream>

using namespace std;

enum class RepairType { None = 0, Maintenance = 10, Engine = 50, Suspension = 35 };
//Задаваме тежест за да можем да пресметнем общата цена на ремонта

class ServiceJob
{
private:
	double RepairTime;
	RepairType Repair;

public:
	ServiceJob();
	ServiceJob(double newRepairType,RepairType newRepair);

	double GetServiceJobPrice(const ServiceJob&);

	double getRepairTime() const;
	double getRepair() const;

	void operator=(const ServiceJob&);

	char* getRepairToChar() const;
	void setRepairTime(int time);
	void setRepair(RepairType RepType);

};