/********************************************************************
** Author: Matthew Goelzer
** Date: 1/24/2019
** Description: Makes a function that calulates fall distance given a time using earths gravity
**********************************************************************/
#include <iostream>
#include <cmath>

double fallDistance(double time) //function for finding fall distance where gravity is set to earth's gravity
{   
    return (0.5 * pow(time,2.0)*9.8);        //returns the fall distance given a time 
} 


/*
int main()
{
     double answer, inputTime;



     std::cout << "Please enter the time to complete the fall." << std::endl;
     std::cin >> inputTime;
     
     answer = distance(inputTime);

     std::cout << "Fall dsitance was: " << answer <<std::endl;

     return 0;
}
*/




 
