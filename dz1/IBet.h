#ifndef IBET_H
#define IBET_H

#include "ITeam.h"

class IBet
{
public:
	virtual ~IBet() = default;

	virtual int getId() = 0;
	virtual int getAmount() = 0;
	virtual ITeam* getTeam() = 0;
	virtual void setBet(int, int, ITeam*) = 0;
};

#endif //IBET_H