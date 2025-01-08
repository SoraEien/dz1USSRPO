#ifndef TEAM_H
#define TEAM_H

#include "ITeam.h"

class Team : public ITeam
{
private:
    std::string _name;

public:
    Team(const std::string& teamName) : _name(teamName) {}

    std::string getName() override;
    void setName(std::string newName) override;
};

#endif //TEAM_H
