/************************************************************************************
** Author: Matthew Goelzer	
** Date: 1/10/2019
** Description: This program converts a temperature from Celsius to Fahrenheit
************************************************************************************/

#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;

int main()
{
	double celsiusTemp; //Variable for Celsius Temperature
	double fahrenheitTemp; //Variable for Fahrenheit Temperature
	double newCelsiusTemp; //9/5 multiplied into Celcisu temperature provided

	//Gets a temperature in Celsius
	std::cout << "Please enter a Celsius temperature. " << std::endl;
	std::cin >> celsiusTemp; 

	//Calulate 9/5 * Celsius
	newCelsiusTemp = celsiusTemp * 9/5;

	//Calcualtes Fahrenheit from Celsius Temperature
	fahrenheitTemp = newCelsiusTemp + 32;

	//Displays temperature in Fahrenheit
	std::cout << "The equivalent Fahrenheit temperature is:\n" << fahrenheitTemp<< std::endl;

	return 0;
}
