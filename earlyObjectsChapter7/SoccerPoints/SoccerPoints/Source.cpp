
#include "TeamScore.h"
#include <iostream>

// Prototypes
void displayMenu(TeamScore& team);
void displayRecord(TeamScore& team);

int main()
{

	TeamScore Younguns("Younguns");
	displayMenu(Younguns);
	return 0;
}

void displayMenu(TeamScore& team)
{
	int menuSelection = -1;

	do {
	
		std::cout << "\nYOUTH FOOTBALL TEAM SCORE\nTeam: " << team.getTeamName() << "\nEnter a Menu Choice From Below: "
			<< "\n0.Exit \n1.Add a Win\n2.Add a Tie\n3.Add a loss\n4.Display Record" << std::endl;
		std::cin >> menuSelection;
		switch (menuSelection)
		{
		case 0:
			std::cout << "\nExiting the program..." << std::endl;
			break;
		case 1:
			team.updateWins();
			std::cout << "\nWin Added" << std::endl;
			break;
		case 2:
			team.updateTies();
			std::cout << "\nTie Added" << std::endl;
			break;
		case 3:
			team.UpdateLosses();
			std::cout << "\nLoss Added" << std::endl;
			break;
		case 4:
			displayRecord(team);
			break;
		default:
			std::cout << "\nError: Input not found, please try again." << std::endl;
			break;
		}
	} while (menuSelection != 0);
}

void displayRecord(TeamScore& team)
{
	int points = (team.getWins() * 3) + team.getTies();
	std::cout << "\nTeam:" << team.getTeamName() << " Wins: " << team.getWins() << " Ties: " << team.getTies()
		<< " Losses: " << team.getLosses() << " Points: " << points << std::endl;;
}