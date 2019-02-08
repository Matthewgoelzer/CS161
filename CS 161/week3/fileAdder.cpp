/******************************************************************************
** Author: Matthew Goelzer
** Date: 1/19/2019
** Description: This file imports a txt file and sums all of the integers and adds those to a new txt file and exports new txt file
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
    //string variables 
    string inputFileName; 

        
    //Integer variables
    int integersFromFile,
        total = 0;

    //Gets file name
    cout << "Please enter your filename." << endl;
    cin >> inputFileName;
    
    //opens entered file
    ifstream inputFile;
    inputFile.open(inputFileName);

   if (inputFile)      //if entered file is real and can be opened 
   {    
        while (inputFile >> integersFromFile)           //integers in file will be added to total until EOF
              total = total + integersFromFile;      
        cout << "result written to sum.txt" << endl;    //wrtitten when sumation is done
   }

   else                //if file is not found or cannot be opened
        cout << "could not access file" << endl;   //printed if file cound not be opend or found 
 
   //makes fime called sum.txt to store total in
   ofstream outputFile;
   outputFile.open("./sum.txt"); 
 
   outputFile << total;     //stores total in sum.txt file

   inputFile.close();       //closes input file
   outputFile.close();      //closes output file sum.txt
 
   return 0;
}
