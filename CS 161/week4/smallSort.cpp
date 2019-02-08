/*******************************************************************
** Author: Matthew Goelzer
** Date: 1/26/19
** Description: Takes three integers and sorts them from smallest to largest 
******************************************************************/


void smallSort(int& firstInt, int& secondInt, int& thirdInt)
{
 if(firstInt > secondInt && firstInt > thirdInt)         //Sets first integer as third integer if largest integer

 {
    int temp = firstInt;
    firstInt = thirdInt;
    thirdInt = temp;
 }
 if(firstInt > secondInt && firstInt < thirdInt)         //sets frist integer as second integer if is in between least and greatest integer values
 {
    int temp = firstInt;
    firstInt = secondInt;
    secondInt = temp;
 }
 if(firstInt < secondInt && firstInt < thirdInt)         // sets first integer to first intger if first integer is the least integer
 {
    int temp = firstInt;
    firstInt = firstInt;
    firstInt = temp;
 } 
 if(secondInt > firstInt && secondInt > thirdInt)        // sets second integer as third integer if is the greatest integer
 {
    int temp = secondInt;
    secondInt = thirdInt;
    thirdInt = temp;
 }
 if(secondInt < firstInt && secondInt < thirdInt)        // sets second integer to first integer if it is the least integer
 { 
    int temp = secondInt;
    secondInt = firstInt;
    firstInt = temp;
 }
 if(thirdInt < secondInt && thirdInt > firstInt)         // sets third integer to the second integer if it is between the least and greatest integer
 {
    int temp = thirdInt;
    thirdInt = secondInt;
    secondInt = temp;
 }
 if(thirdInt < secondInt && thirdInt < firstInt)         // sets the third integer to the first integer if it is the least integer
 {
    int temp = thirdInt;
    thirdInt = firstInt;
    firstInt = temp;
 } 
}




































     


 







 
   

