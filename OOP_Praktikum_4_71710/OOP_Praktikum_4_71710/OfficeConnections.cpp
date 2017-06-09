#include "stdafx.h"
#include "Office.h"
#include "OfficeConnections.h"

void OfficeConnections::resize()
{
	Office *temp[2] = new Office[container * 2][2];

	for (size_t i = 0; i < size; i++)
	{
		temp[i] = connected[i];
	}
}
