/********************************************************************
** Author: Matthew Goelzer
** Date: 1/10/2019
** Description: Asks for five numbers and outputs average of those five numbers
********************************************************************/

#include <iostream>
#include <string>

int main ()
{
	double firstNum, secondNum, thirdNum, forthNum, fifthNum, averageResult, addedNums;

	//Gets five numbers to average
	std::cout << "Please enter five numbers. " << std::endl;

	//Stores the fice inputed numbers
	std::cin >> firstNum >> secondNum >> thirdNum >> forthNum >> fifthNum;

	//Adds the five numbers	
	addedNums = firstNum + secondNum + thirdNum + forthNum + fifthNum;

	//averages five numbers
	averageResult = addedNums/5;

	//Displays average
	std::cout << "The average of those numbers is: " << averageResult << std::endl;

	return 0;
}
