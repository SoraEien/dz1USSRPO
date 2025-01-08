#ifndef IREPORT_H
#define IREPORT_H

#include "ITeam.h"
#include "IBet.h"
#include <vector>

class IReport
{
public:
	virtual ~IReport() = default;

	virtual void calculateWinnings() = 0;
	virtual void setWinner(ITeam*) = 0;
	virtual void setPercent(float) = 0;
	virtual void addBet(IBet*) = 0;
};

#endif //IREPORT_H