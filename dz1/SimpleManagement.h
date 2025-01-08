#ifndef SIMPLEMANAGEMENT_H
#define SIMPLEMANAGEMENT_H

#include "IManagement.h"
#include "ITeam.h"
#include "IBet.h"
#include "IReport.h"
#include "BetCard.h"
#include "WinningsReport.h"
#include "Team.h"

class SimpleManagement :
    public IManagement
{
private:
    int _command;
    int _secondCommand;
    Team* _currentTeam;
    BetCard* _currrentBet;
    WinningsReport* _currentReport;
public:
    void go() override;
};

#endif //SIMPLEMANAGEMENT_H