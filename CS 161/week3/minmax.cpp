/**************************************************************************
** Author: Matthew Goelzer
** Date: 1/17/19
** Descrption: Gets number of integers that user wants to enter and then determines the minimum and maximum of those integers
****************************************************************************/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
     //Variables for minimum, maximum, integer inout, and counter
     int miniValue = 1,
         maxValue = 1,
         integerNumber,
         integerInput,
         count;



     //Set count to 0
     count = 0;
     
     //Gets number of integers
     cout << "How many integers would you like to enter?" << endl;
     cin >> integerNumber;

     // Gets integers
     cout << "Please enter " << integerNumber << " integers." << endl;
     

     while(count < integerNumber)
     {    
          cin >> integerInput;                  //Input for integers from user
         

          if (miniValue >= integerInput)        //finds minimum value
          { 
           miniValue = integerInput;            //sets value to min if found to be minimum value
          
          }

          else if (maxValue <= integerInput)    //finds max value if not minimum  value
          {
           maxValue = integerInput;             //sets value to max if it is the max value found
        
          }
                                           // adds to count
          count++; 
     }
     //PRints minimum and maximum values 
     cout << "min: " << miniValue << "\nmax: " << maxValue << endl;

     return 0;
}


