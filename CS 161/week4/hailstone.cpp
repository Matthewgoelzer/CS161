/***************************************************************
** Author: MAtthew Goelzer
** Date: 1/24/19
** Description: This program runs a hailstone calculation 
***************************************************************/
#include <iostream> 

int hailstone( int inputInteger)
{
    int count, newInteger;                      //Set varaibles for counting and the new integer created

    count = 0;                                  // Set the counter equal to zero

    if(!(inputInteger == 1))                    //Argument stating that if the entered integer is not zero it will progress to next step
    {
        if(inputInteger%2 == 0)                 //Argument stating that if the integer entered is even then progress to next step
        {
            newInteger = inputInteger/2;        //Divide the integer by 2 and store in a different variable called newInteger
            count++;                            //add 1 to the counter
        }
        else if(inputInteger%2 > 0)             //IF the entered integer is odd the nprogress to next step
        {
            newInteger = inputInteger*3 + 1;    //multiply entered integer by 3 and add 1 and store in a different variable
            count++;                            //add 1 to the counter
        }
         
        while (!(newInteger == 1))                //if the integer is not equal to 1 then progress to next step
        {
            if (newInteger%2 == 0)                //if the integer is even progress to next step
            {
                newInteger = newInteger/2;        //divide integer by 2 and store in the same variable
                count++;                          //Add 1 to counter
            }
            else if(newInteger%2 > 0)             //if the integer is odd then progress to next step
            {
                newInteger = newInteger * 3 + 1;  //multiply integer by 3 and add 1 and store in the same variable 
                count++;                          //add 1 to counter
            }
            else if(newInteger == 1)              //if integer is equal to 1 then add 1 to counter and end loop
                count++; 
        }  
   }
   return count;                                  //return count

}
/*
int main()
{
    int initialInteger, counter;

    std::cout << " Enter integer: " << std::endl;
    std::cin >> initialInteger;

    counter = hailstone(initialInteger);

    std::cout << "Count was: " << counter << std::endl;

    return 0;
}
*/
