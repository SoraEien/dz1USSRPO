#ifndef BET_H
#define BET_H

#include "IBet.h"
#include "ITeam.h"

class BetCard :
    public IBet
{
private:
    int _id;
    int _amount;
    ITeam* _team;

public:
    int getId() override;
    int getAmount() override;
    ITeam* getTeam() override;
    void setBet(int, int, ITeam*) override;
};

#endif //BET_H