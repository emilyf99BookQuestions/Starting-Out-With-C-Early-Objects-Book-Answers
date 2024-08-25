#include "StringCompare.h"
#include <iostream>

//Question Eight
void StringCompare::StringCompareStart()
{
	string name1, name2;
	cout << "Enter two names.\nName 1: ";
	cin >> name1;

	cout << "\nName 2: ";
	cin >> name2;

	bool areStringsTheSame = SameString(name1, name2);
	if (areStringsTheSame)
	{
		cout << "\nThe strings are the same!";
	}
	else {
		cout << "\nThese strings are not the same. :( ";
	}

}

string StringCompare::UpperCaseIt(string s)
{
	string uppercased = s;
	for (char& c : uppercased) {
		c = std::toupper(static_cast<unsigned char>(c));
	}
	return uppercased;
}

bool StringCompare::SameString(string s1, string s2)
{
	string UpperName1 = UpperCaseIt(s1);
	string UpperName2 = UpperCaseIt(s2);

	if (UpperName1 == UpperName2)
	{
		return true;
	}
	else {
		return false;
	}
}


