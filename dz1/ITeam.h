#ifndef ITEAM_H
#define ITEAM_H

#include <string>

class ITeam
{
public:
	virtual ~ITeam() = default;

	virtual std::string getName() = 0;
	virtual void setName(std::string) = 0;
};

#endif //ITEAM_H