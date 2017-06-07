#pragma once
#include "Office.h"

class OfficeConnections
{
private:
	Office* connected[2];
	size_t container;
	size_t size;
	void resize();

public:
	OfficeConnections(Office* newConnected[2], size_t newContainer, size_t newSize);
	OfficeConnections(const OfficeConnections& officeconnections);
	~OfficeConnections();

	Office* ShipTo(Office office) const;//връща списък от градовете до които може да се направи доставка


};