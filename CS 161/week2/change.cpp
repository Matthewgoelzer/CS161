/***************************************************************
** Author: Matthew Goelzer
** Date: 1/12/19
**Description: This program calulates the amount of change for each cent peice for a given amount of money between 99-0 cents
****************************************************************/
#include <iostream>
#include <string>

int main()
{
	//Varaibles for quarters, nickels, dimes, pennys, and inputed cents amount
        int quarters = 25, dimes = 10, nickels = 5, pennys = 1, quarterChange, dimeChange, nickelChange, pennyChange, centsAmount;
	

	//Gets cents amount between 99-0 cents
	std::cout << "Please enter an amount in cents less than a dollar." << std::endl;
	std::cin >> centsAmount;

	//Calculates change for each cent piece using inputed cents amount
 	quarterChange = centsAmount / quarters;
	dimeChange = ((centsAmount-(quarterChange*quarters))%quarters)/dimes; 
	nickelChange = ((centsAmount-(quarterChange*quarters)-(dimeChange*dimes))%dimes)/nickels;
	pennyChange =((centsAmount-(quarterChange*quarters)-(dimeChange*dimes)-(nickelChange*nickels)) %nickels)/pennys;

	//Displays calcualted change for each cent piece
	std::cout << "Your change will be:\n";
	std::cout << "Q: " << quarterChange << std::endl;
        std::cout << "D: " << dimeChange << std::endl;
	std::cout << "N: " << nickelChange << std::endl;
	std::cout << "P: " << pennyChange << std::endl;

	return 0;
}
