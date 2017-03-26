#include "stdafx.h"
#include "ServiceJob.h"

ServiceJob::ServiceJob()
{
	RepairTime = 0;
	Repair = RepairType::None;
}

ServiceJob::ServiceJob(double newRepairType, RepairType newRepair)
{
	RepairTime = newRepairType;
	Repair = newRepair;
}

double ServiceJob::GetServiceJobPrice(const ServiceJob & object)
{
	return object.getRepair() * object.getRepairTime();
}

double ServiceJob::getRepairTime() const
{
	return RepairTime;
}

double ServiceJob::getRepair() const
{
	return (double)Repair;
}

void ServiceJob::operator=(const ServiceJob &obj)
{
	this->Repair = obj.Repair;
	this->RepairTime = obj.RepairTime;
}

char* returnRepair(RepairType Rep)
{
	switch (Rep) 
	{
	case RepairType::Engine: return "Engine"; break;
	case RepairType::Maintenance: return "Maintance"; break;
	case RepairType::Suspension: return "Suspension"; break;
	default: return "Not assigned";  break;
	}
}
char* ServiceJob::getRepairToChar() const
{
	return returnRepair(Repair);
}

void ServiceJob::setRepairTime(int time)
{
	this->RepairTime = time;
}

void ServiceJob::setRepair(RepairType RepType)
{
	this->Repair = RepType;
}
