//****************************************************************
// Name : Brayden McDowell
// Title : McDowell_Brayden_Assignment#1.cpp
// Date : 9/12/16
// Description : First a simple program was edited to see what effect the changes would have on it. Then a three part program 
// with each part involving different inputs with simple arithmetic was written
//****************************************************************
/*
a.The program is attempting to access things that don't exist or aren't defined
b. The program is unable to find both the second half of the "s and is interpreting Total as variable when only total has been defined.
c. The program runs the same. The additional semicolons do nothing on their own
d. The program is unable to compile due to the fact it can't find the end of it's main function
e. The total score goes from .8 to 0 since both total and COUNT are now int data type


*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	cout << "**************\nPart 1\n**************\n";
	double one, two, three; //Setting up for the user to input the numbers
	cout << setprecision(2) << fixed; //Making sure the output is to 2 decimal points
	cout << "Enter number one\n";
	cin >> one;
	cout << "\nEnter number two\n";
	cin >> two;
	cout << "\nEnter number three\n";
	cin >> three;
	cout << "The average is " << (one + two + three)/3; //The average is found by simple arithmetric 
	cout << "\n**************\nPart 2\n**************\n";
	int die; 
	cout << "\nEnter how many sides you want the die to have\n";
	cin >> die;
	srand (time(NULL));
	int first=rand() % die + 1; //Seeds random so random numbers won't always be the same
	int second=rand() % die + 1;
	int third=rand() % die + 1; //the variable for the dice and their value is declared all at once
	cout << "The first die rolled a " << first;
	cout << "\nThe second die rolled a " << second;
	cout << "\nThe third die rolled a " << third;
	cout << "\nThe total of these rolls is " << first + second + third; //The rolls are totalled
	cout << "\n**************\nPart 3\n**************\n";
	cout << "How much did it cost\n";
	double cost;
	cin >> cost;
	cout << "What did you give the cashier\n"; //The user inputs the cost and the amount they gave the cashier 
	double payment;
	cin >> payment;
	double change= payment - cost;
	cout << "Your change is " << change;
	int dollars= change/1;
	int quarters=(change-dollars)/.25; // To find quarters dollars is removed from the change and then whats left is divided to the nearest whole number
	int dimes= ( change - dollars - (quarters*.25) )/ .10;  // The same is done  for rest of the variables
	int nickles=( change - dollars - (quarters*.25)- (dimes*.10) )/.05;
	double pennies=( change - dollars- (quarters*.25) - (dimes*.10) - (nickles*.05) )/0.01; // If pennies was an int datatype it would sometimes be 1 short.
	                                                                                     	// By making it a double it no longer drops the data.
	cout << setprecision(0) << fixed; //So the pennies don't output as X.00
	cout << "\nYou get " << dollars << " dollars back";
	cout << "\nYou get " << quarters << " quarters back";
	cout << "\nYou get " << dimes << " dimes back";
	cout << "\nYou get " << nickles << " nickles back";
	cout << "\nYou get " << pennies << " pennies back";
}
