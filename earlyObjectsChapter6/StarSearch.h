#pragma once

//Question Ten
class StarSearch {
public:
	static void StarSearchStart();
	static double GetJudgeData();
	static double CalcScore(double score1, double score2, double score3, double score4, double score5);
	static int FindLowest(double score1, double score2, double score3, double score4, double score5);
	static int FindHighest(double score1, double score2, double score3, double score4, double score5);
};