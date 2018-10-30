//****************************************************************
// Name : Brayden McDowell
// Title : McDowell_Brayden_Assignment#2.cpp
// Date : 10/9/16
// Description : Lab questions and then a mathmatical table generator
//****************************************************************
/*

/* Part 1

A)First you need to include the <string> libary. The other problems are if the sting comes before the integer the program just breaks. I think the 2 inputs should just on 
seperate cin lines with some cout prompts to clarify when and what the user is inputing.

B) For the second for loop change it too "for (int j = 5 ; j > i; j--)" so that the inner part of the loop only prints *s
for 5-i columns. Then since i is increasing j will print one less * with every row.

C)The 4770th output is 3243 and the new code is 
{
for (int i = 0; i < 100; i++)
  for (int j = 0; j< 100; j++)
    cout << i << "." << j+1 << ": "<< (i*j) << endl;
}

*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{int input=-1;
 //Keep the menu running until a valid input is entered. Multiple != are used instead of greater
														    	  //then and less then to prevent the program for seeing a letter as a correct input
cout << "Which table do you want to view?\n"; //Print the initial menu
cout <<	"1)Addition\n";
cout <<	"2)Subtraction\n";
cout <<	"3)Multiplication\n";
cout <<	"4)Division\n";
cout <<	"0)Exit\n";
cin >> input;
			while (input!=1 && input!=2 && input!=3 && input!=4 && input!=0 ) //If the user has an invalid input
			{	
			cout << "\ninvalid input\n";
			cin >> input;
			}
if (input == 0) //Close the program if thats what the user desired
	{
	cout << "\nClosing program";
	exit(input == 0);
	}
int dimensionX=-1;
int dimensionY=-1;
while (dimensionX <=0 || dimensionY <=0)
	{
	cout << "Enter the dimensions of your table with a single space between each number.\n"; //Get the dimensions from the user
	cin >> dimensionX >> dimensionY;
		if (dimensionX <0 || dimensionY <0)	
		{
			cout << "Enter a positive number for both"; //If the user has an invalid input
			cin >> dimensionX >> dimensionY;
		}	
	}
if (input==1)
		{
		for(int row=1;row!=(dimensionX+1);row++)
			{
			for(int col=1;col!=(dimensionY+1);col++)
				{
					if (col==1 && row==1) //make the top row of the table
					{
					cout << "+  |";
						for (int col=1;col!=dimensionY+1;col++)
						{
						cout << setw(5) << col;
						}   
					cout << "\n---------------------------------------------------------\n";
					}				
					if (col==1) // make the rightside of the table
					{
					cout << row << "  |" << setw(5) << (row+col); //First column of math
					}
					else
					cout << setw(5) << (row+col); //Rest of the math
					
				}
				cout << endl;
				
			}
		}
else if (input==2) //Next two options are the same besides the operation used
		{
		for(int row=1;row!=(dimensionX+1);row++)
			{
			for(int col=1;col!=(dimensionY+1);col++)
				{
					if (col==1 && row==1)
					{
					cout << "-  |";
						for (int col=1;col!=dimensionY+1;col++)
						{
						cout << setw(5) << col;
						}   
					cout << "\n---------------------------------------------------------\n";
					}			
					if (col==1)
					{
					cout << row << "  |" << setw(5) << (row-col);
					}
					else
					cout << setw(5) << (row-col);
					
				}
				cout << endl;
				
			}
		}
else if (input==3)
		{
			for(int row=1;row!=(dimensionX+1);row++)
			{
			for(int col=1;col!=(dimensionY+1);col++)
				{
					if (col==1 && row==1)
					{
					cout << "*  |";
						for (int col=1;col!=dimensionY+1;col++)
						{
						cout << setw(5) << col;
						}   
					cout << "\n---------------------------------------------------------\n";
					}			
					if (col==1)
					{
					cout << row << "  |" << setw(5) << (row*col);
					}
					else
					cout << setw(5) << (row*col);
					
				}
				cout << endl;
				
			}
		}
else if (input==4)
		{
			for(double row=1;row!=(dimensionX+1);row++) //Since its division double is used instead of int
			{
			for(double col=1;col!=(dimensionY+1);col++)
				{
					if (col==1 && row==1)
					{
					cout << "/  |";
						for (double col=1;col!=dimensionY+1;col++)
						{
						cout << setw(5) << col;
						}   
					cout << "\n---------------------------------------------------------\n";
					}			
					if (col==1)
					{
					cout << setprecision(0) << fixed;
					cout << row << "  |";
					}
					cout << setprecision(2) << fixed;
					cout << setw(5) << (row/col);
					
				}
				cout << endl;
				
			}
		}
}
