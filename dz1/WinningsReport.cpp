#include "WinningsReport.h"
#include <iostream>

void WinningsReport::addBet(IBet* bet)
{
	_bets.push_back(bet);
}

void WinningsReport::setPercent(float percentage)
{
	_percentage = percentage;
}

void WinningsReport::setWinner(ITeam* winner)
{
	_winner = winner;
}

void WinningsReport::calculateWinnings()
{
	for (auto bet : _bets) 
	{
		int res_amount = bet->getAmount();
		if (bet->getTeam() != _winner) 
		{
			res_amount *= (-1);
		}
		std::cout << "Player: " << bet->getId() << " get " <<
			res_amount << std::endl;
	}
}