
#include "TeamScore.h"

TeamScore::TeamScore(std::string teamNameInput)
{
	teamName = teamNameInput;
	wins = 0;
	ties = 0;
	losses = 0;
}

int TeamScore::updateWins(){return ++wins;}
int TeamScore::updateTies() {return ++ties;}
int TeamScore::UpdateLosses(){return ++losses;}
std::string TeamScore::getTeamName() { return teamName; }
int TeamScore::getWins() { return wins;  }
int TeamScore::getTies() { return ties; }
int TeamScore::getLosses() { return losses; }
