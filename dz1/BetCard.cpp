#include "BetCard.h"

int BetCard::getId() 
{
	return _id;
}

int BetCard::getAmount()
{
	return _amount;
}
ITeam* BetCard::getTeam()
{
	return _team;
}
void BetCard::setBet(int id, int ammount, ITeam* team)
{
	_id = id;
	_amount = ammount;
	_team = team;
}