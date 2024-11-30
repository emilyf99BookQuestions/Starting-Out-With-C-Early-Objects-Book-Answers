#include "Widget.h"

int main(){
	Widget defaultWidget;
	defaultWidget.widgetCalculator();

	Widget testWidget(200);
	testWidget.widgetCalculator();
	return 0;
}