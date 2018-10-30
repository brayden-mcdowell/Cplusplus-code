//****************************************************************
// Name : Brayden McDowell
// Title : McDowell_Brayden_Assignment#3.cpp
// Date : 10/9/16
// Description : Functions
//****************************************************************
/*Part 1
A) First the item variable with datatype char is converted to int. It checks if the variable is between 65 and 90 or 97 and 122. If so it returns a 1. If not it returns a 0.
B) First the item variable is converted to lowercase then that is changed to int. That numberical value then has 65 subtracted from it and returns the result.
C) using fib as Fibonacci
									fib(5)
								fib(4)+fib(3)
			 		 fib(4)										fib(3)
				fib(3)+fib(2)							fib(2)      +		fib(1)
		fib(2)+fib(1)	   fib(1)+fib(0)			fib(1)+fib(0)			return 1
fib(1)+fib(0)	return 1		return 1 and 0			return 1 and 0 		
return 1 and 0
1+1+1+1+1+0+0+0=5
5
*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void getName();
void dayOfWeek();
void dayList();
int getNum();
int coutDay(int);
void scamMessageXTimes();
void findBigger();
void findDistance();

int main()
{
cout << "Name: Brayden McDowell" << endl;
cout << "Major: Electrical Engineering  "<< endl;
cout << "Function Testing Prompt" << endl;
getName();
dayOfWeek();
scamMessageXTimes();
findBigger();
findDistance();
}

void getName()
{
string name;
cout << "Enter Name: ";
getline(cin, name);
cout <<  "Welcome " << name << "!" << endl;
}

void dayOfWeek()
{
dayList();
getNum();
}

void dayList()
{
cout << endl << "Monday-1" << endl << "Tuesday-2" << endl << "Wednesday-3" << endl;
cout << "Thursday-4" << endl << "Friday-5" << endl << "Saturday-6" << endl << "Sunday-7";
cout << endl << "Enter the number that corresponds to the current day: ";
}

int getNum()
{
int input;
cin >> input;
while (input!=1 && input!=2 && input!=3 && input!=4 && input!=5 && input!=6 && input!=7 ) //If the user has an invalid input
	{	
	cout << "\ninvalid input\n";
	cin >> input;
	}
coutDay(input);
}

coutDay(int input)
{
cout << endl << "Happy ";	
if (input==1)
cout << "Monday!";
else if (input==2)
cout << "Tuesday!";
else if (input==3)
cout << "Wednesday!";
else if (input==4)
cout << "Thursday!";
else if (input==5)
cout << "Friday!";
else if (input==6)
cout << "Saturday!";
else if (input==7)
cout << "Sunday!";
}

void scamMessageXTimes()
{
string message;

cout << endl << "Enter your message: ";
cin.ignore();
getline (cin,message);
cout << endl << "How much should it repeat: ";
int repeatAmount;
cin >> repeatAmount;
for(int firstRepeat=0;firstRepeat!=repeatAmount;firstRepeat++)
	{
	cout << message << endl;
	}	
}

void findBigger()
{
cout << "Enter 2 numbers seperated by a space: " << endl;
int num1;
int num2;
cin >> num1 >> num2;
if (num1>num2)
cout << num1 << " is larger then " << num2;
else if (num1<num2)
cout << num2 << " is larger then " << num1;
else if (num1==num2)
cout << num1 << " and " << num2 << " are equal.";
}

void findDistance()
{
int x1;
int x2;
int y1;
int y2;
cout << endl << "Enter x1: ";
cin >> x1;
cout << "Enter y1: ";
cin >> y1;
cout << "Enter x2: ";
cin >> x2;
cout << "Enter y2: ";
cin >> y2;
int dx=(x2-x1);
int dy=(y2-y1);
dx *= dx;    //Square dx and dy
dy *= dy;
double distance = sqrt(dx+dy);
cout << "The distance between those points is "<< distance << " units.";
}
