#include "Widget.h"
#include <iostream>

/*
Design a class for a widget manufacturing plant. 
the class object will calculate
how many days it will take to produce any number of widgets. 

(The plant operates two 8-hour shifts per day.) Write a program that asks
the user for the number of widgets that have been ordered and then
displays the number of days it will take to produce them. Think about
what values your program should accept for the number of widgets
ordered.
*/

Widget::Widget()
{
	widgetsToMake = 10;
}

Widget::Widget(int widgetsOrdered)
{
	widgetsToMake = widgetsOrdered;
}

bool Widget::isInputValid(int widgetsToMake)
{
	return widgetsToMake >= 1;
}

void Widget::widgetCalculator()
{
	bool validNumber = isInputValid(widgetsToMake);
	
	if (!validNumber) {
		std::cout << "\nThe amount of widgets is not valid. Widgets entered: " << widgetsToMake;
	}
	else {
		int days = static_cast<int>(std::ceil(static_cast<double>(widgetsToMake) / MAX_WIDGETS_PER_DAY));
		std::cout << "\nThe amount of days to make " << widgetsToMake << " widgets is " << days << " days.";
	}
}




