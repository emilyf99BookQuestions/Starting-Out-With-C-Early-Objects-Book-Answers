#include "StarSearch.h"
#include <iostream>
#include <algorithm>

//Question Ten
void StarSearch::StarSearchStart()
{
	double judge1 = GetJudgeData();
	double judge2 = GetJudgeData();
	double judge3 = GetJudgeData();
	double judge4 = GetJudgeData();
	double judge5 = GetJudgeData();

	double average = CalcScore(judge1, judge2, judge3, judge4, judge5);

	std::cout << "\nThe contestants average score is " << average << ".";
}

double StarSearch::GetJudgeData()
{
	double score = -1;
	do {
		std::cout << "Enter a score between 0.0 - 10.0 for the judges score.\nScore: ";
		std::cin >> score;

		if (score < 0.0 || score > 10.0) 
		{
			std::cout << "Score not in range, please enter between 0.0 and 10.0.Score\n";
		}
	} 
	while (score < 0.0 || score > 10.0);
	return score;
}

double StarSearch::CalcScore(double score1, double score2, double score3, double score4, double score5)
{
	double lowest = FindLowest(score1, score2, score3, score4, score5);
	double highest = FindHighest(score1, score2, score3, score4, score5);
	double sum = score1 + score2 + score3 + score4 + score5 - lowest - highest;
	return sum / 3.0;
}

int StarSearch::FindLowest(double score1, double score2, double score3, double score4, double score5)
{
	int scores[] = { score1, score2, score3, score4, score5 };
	return *std::min_element(scores, scores + 5);
}

int StarSearch::FindHighest(double score1, double score2, double score3, double score4, double score5)
{
	int scores[] = { score1, score2, score3, score4, score5 };
	return *std::max_element(scores, scores + 5);
}
