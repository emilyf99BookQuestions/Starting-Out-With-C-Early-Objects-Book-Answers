#include "LowestScoreDrop.h"
#include <iostream>
#include <algorithm>

//Question Nine
void LowestScoreDrop::LowestScoreDropStart()
{
	int score1, score2, score3, score4, score5;
	GetScore(score1);
	GetScore(score2);
	GetScore(score3);
	GetScore(score4);
	GetScore(score5);

	CalcAverage(score1, score2, score3, score4, score5);
}

void LowestScoreDrop::GetScore(int& score)
{
	do {
		std::cout << "Enter a test score (0-100): ";
		std::cin >> score;
		if (score < 0 || score > 100) {
			std::cout << "Invalid score. Please enter a value between 0 and 100.\n";
		}
	} while (score < 0 || score > 100);
}

void LowestScoreDrop::CalcAverage(int score1, int score2, int score3, int score4, int score5)
{
	int lowest = FindLowest(score1, score2, score3, score4, score5);
	double average = (score1 + score2 + score3 + score4 + score5 - lowest) / 4.0;

	std::cout << "The average of the four highest scores is: " << average << std::endl;
}

int LowestScoreDrop::FindLowest(int score1, int score2, int score3, int score4, int score5)
{
	int scores[] = { score1, score2, score3, score4, score5 };
	return *std::min_element(scores, scores + 5);
}
