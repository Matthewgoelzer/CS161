/***********************************
Author: Matthew Goelzer
Date: 1/9/2019
Description: Calculates how many days until Christmas using how many weeks until Christmas
***********************************/
#include <iostream>

using namespace std;

int main()
{
	int weeksUntilChristmas;
	int daysUntilChristmas;

	//Get the number of weeks until Christmas
	cout << "How many weeks until Christmas?";
	cin >> weeksUntilChristmas;

	// Calculates days until Christmas
	daysUntilChristmas = weeksUntilChristmas * 7;

	//Displays days until Christmas
	cout << "There are " << daysUntilChristmas << " days until Christmas\n";

	//Pauses program so that program exits on enter key stroke
	cin.ignore();
	cin.get();

	return 0;
}

