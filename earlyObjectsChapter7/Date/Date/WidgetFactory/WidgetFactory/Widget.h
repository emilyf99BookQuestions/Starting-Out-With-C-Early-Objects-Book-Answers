#pragma once

class Widget {
private:
	static constexpr int WIDGETS_PER_HOURS = 10;
	static constexpr int HOURS_PER_SHIFT = 8;
	static constexpr int SHIFTS_IN_DAY = 2;
	static constexpr int MAX_WIDGETS_PER_DAY = (HOURS_PER_SHIFT * SHIFTS_IN_DAY) * WIDGETS_PER_HOURS;
	
	int widgetsToMake;
public:
	//Constructors
	Widget();
	Widget(int widgetsOrdered);

	void widgetCalculator();
	bool isInputValid(int widgets);
};