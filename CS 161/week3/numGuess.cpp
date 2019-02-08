/************************************************************************************
** Author: Matthew Goelzer
** Date: 1/18/2019
** Description: This program gets an integer from the user and then asks user to guess for that integer.
 The program provides feed back to if the guess is larger or smaller then intger entered to be guessed.
*************************************************************************************/
#include <iostream>

int main()
{
     using std::cout;
     using std::cin;
     using std::endl;
   
     //Variables for the counter, integer to be guess, and the guess value
     int count = 0,   
         integerValue,
         guess;
     //Gets integer to be guessed  
     cout << "Enter the number for the player to guess." << endl;
     cin >> integerValue;

     //Gets guess
     cout << "Enter your guess." << endl;
     cin >> guess; 
     //Loops until correct answer is given. will provide feedback if guess is high or low
     while (guess != integerValue)
     {     
           
 
           if (guess > integerValue)
           { 
                 cout << "Too high - try again." << endl;     //Prints that guess was higher then integer to be guessed
                 count++;                                      //adds 1 to counter
           } 
           else if (guess < integerValue)
           {
                 cout << "Too low - try again." << endl;      //Prints that guess was lower then integer to be guessed
                 count++;                                     //adds 1 to counter
           }
           cin >> guess;
     }
     count++;
     cout << "You guessed it in " << count << " tries." <<endl;      //Prints how many guesses it took to guess correct value

     return 0;
}
