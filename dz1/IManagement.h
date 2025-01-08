#ifndef IMANAGEMENT_H
#define IMANAGEMENT_H

#include "ITeam.h"
#include "IBet.h"
#include "IReport.h"

class IManagement
{
public:
	virtual ~IManagement() = default;

	virtual void go() = 0;
};

#endif //IMANAGEMENT_H