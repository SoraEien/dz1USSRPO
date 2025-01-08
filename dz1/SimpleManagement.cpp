#include "SimpleManagement.h"
#include <iostream>
#include "Team.h"

void SimpleManagement::go() 
{
	_command = -1;
	while (_command != 0) 
	{
		std::string name;
		int amount;
		int id;
		float percent;
		std::cout << "Chose class:\n 1 - Team \n 2 - BetCard \n 3 - WinningsReport\n 0 - Exit \n Chose number:";
		std::cin >> _command;
		switch (_command)
		{
		case 1: //Team
			std::cout << "Chose command:\n 1 - Create new Team \n 2 - setName \n 3 - getName\n 0 - Exit to main menu \n Chose number:";
			std::cin >> _secondCommand;
			switch (_secondCommand)
			{
			case 1:
				_currentTeam = new Team("new");
				break;
			case 2:
				std::cout << "Input new name:\n";
				std::cin >> name;
				_currentTeam->setName(name);;
				break;
			case 3:
				std::cout << "Current team name:" << _currentTeam->getName() <<"\n";
				break;
			case 0:
				std::cout << "Returning to main menu\n";
				break;
			default:
				std::cout << "Incorrect command, returning to main menu\n";
				break;
			}
			break;
		case 2: //BetCard
			std::cout << "Chose command:\n 1 - getId \n 2 - getAmount \n 3 - getTeam\n 4 - setBet\n 5 - Create new Bet \n 0 - Exit \n Chose number:";
			std::cin >> _secondCommand;
			switch (_secondCommand)
			{
			case 1:
				std::cout << "Current bet id:" << _currrentBet->getId() << "\n";
				break;
			case 2:
				std::cout << "Current bet amount:" << _currrentBet->getAmount() << "\n";
				break;
			case 3:
				std::cout << "Current bet team name:" << _currrentBet->getTeam()->getName() << "\n";
				break;
			case 4:
				std::cout << "Current team name:" << _currentTeam->getName() << "\n";
				std::cout << "Input bet id and amount: \n";
				std::cin >> id >> amount;
				_currrentBet->setBet(id, amount, _currentTeam);
				break;
			case 5:
				_currrentBet = new BetCard();
				break;
			case 0:
				std::cout << "Returning to main menu\n";
				break;
			default:
				std::cout << "Incorrect command, returning to main menu\n";
				break;
			}
			break;
		case 3: //WinningsReport
			std::cout << "Chose command:\n 1 - calculateWinnings \n 2 - setWinner \n 3 - setPercent\n 4 - addBet\n 5 - Create new Report \n 0 - Exit \n Chose number:";
			std::cin >> _secondCommand;
			switch (_secondCommand)
			{
			case 1:
				_currentReport->calculateWinnings();
				break;
			case 2:
				std::cout << "Current team name:" << _currentTeam->getName() << "\n";
				_currentReport->setWinner(_currentTeam);
				break;
			case 3:
				std::cout << "Input percent: \n";
				std::cin >> percent;
				_currentReport->setPercent(percent);
				break;
			case 4:
				std::cout << "Current bet:" << _currrentBet->getId() << " " << _currrentBet->getAmount() << " " << _currrentBet->getTeam()->getName() << " " << "\n";
				_currentReport->addBet(_currrentBet);
				break;
			case 5:
				_currentReport = new WinningsReport();
				break;
			case 0:
				std::cout << "Returning to main menu\n";
				break;
			default:
				std::cout << "Incorrect command, returning to main menu\n";
				break;
			}
			break;
		default:
			break;
		}
	}
}