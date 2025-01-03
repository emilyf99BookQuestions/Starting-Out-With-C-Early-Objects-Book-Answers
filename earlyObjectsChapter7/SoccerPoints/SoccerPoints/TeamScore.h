#pragma once
#include <string>


class TeamScore
{
private:
	std::string teamName;
	int wins;
	int ties;
	int losses;

public:
	// Constructors
	TeamScore(std::string teamName);

	// Other Methods
	int updateWins();
	int updateTies();
	int UpdateLosses();
	std::string getTeamName();
	int getWins();
	int getTies();
	int getLosses();
};