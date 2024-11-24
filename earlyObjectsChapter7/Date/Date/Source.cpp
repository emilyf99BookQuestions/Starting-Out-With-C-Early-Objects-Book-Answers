#include "Date.h"

int main() {
	Date defaultDate;
	Date validDate1 = Date::validator(defaultDate);
	Date::printer(validDate1);

	Date date1(2, 6, 1998);
	Date validDate2 = Date::validator(date1);
	Date::printer(validDate2);

	Date date2(32, 4, 2024);
	Date validDate3 = Date::validator(date2);
	Date::printer(validDate3);

	return 0;
}