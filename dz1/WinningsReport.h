#ifndef WINNINGSREPORT_H
#define WINNINGSREPORT_H

#include "IBet.h"
#include "ITeam.h"
#include "IReport.h"
#include <vector>

class WinningsReport :
	public IReport
{
private:
	std::vector<IBet*> _bets;
	ITeam* _winner;
	float _percentage;

public:
	void calculateWinnings() override;
	void setWinner(ITeam*) override;
	void setPercent(float) override;
	void addBet(IBet*) override;
};

#endif //WINNINGSREPORT_H