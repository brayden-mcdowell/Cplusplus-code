//****************************************************************
// Name : Brayden McDowell
// Title : McDowell_Brayden_Assignment#4.cpp
// Date : 12/02/16
// Description : Assign's names and numbers to "cars" using arrays and then pits them in a 
// random "race" and measures the outcomes of the "race"
//****************************************************************
/*
A.Classes can do everything structs can do with the addition of being able to run a function to fill in part of the struct. In class Members can also be private of public as opposed to the default
public nature of a struct.
B.The car would be a class instead of a sturct and would have a function inside it that deals with  both speed and course progress.
*/
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <time.h>
using namespace std;


struct cars
{
	double totalMiles;
	double speed;
	string driverName;
	string sponsorName;
	int carNum;
}car[21]; //Size 21 since I didnt want to have car#0

double makeProgress(double);
double randomizer();


int main()
{
srand (time(NULL)); //Seed random
int n; //For looping through the differnet car structs

//Names and sponsors pulled by the upcoming assignment loop
string driverNameList[50] = {"William Swopes", "Margurite Miland", "Alva Liska", "Bruna Breen", "Luciana Deshotel", "Jeannetta Nesbitt", "Donny Ledger", "Modesto Tennant",
"Imelda Hassler", "Karma Agar", "Janis Wisneski", "Micha Dillow", "Mattie Boulden",
"Ethelyn Boswell", "Erica Corvin", "Marion Holliday", "Laticia Repka", "Desirae Guarino", "Ines Wallach", "Deloris Kimbler", "Elliot Shatley", "Millicent Koller",
"Bess Medellin", "Marcy Lydick", "Garnet Mccabe", "Donna Tannehill", "Dusti Devillier", "Leland Slemp", "Keiko Dolph", "Maybell Berggren", "Jeni Crew",
"Christi Birdwell", "Una Sprague", "Sheba Mirza", "Alanna Wawrzyniak", "Francina Rippel", "Fermin Layne", "Taren Stetson", "Serina Reveles", "Maegan Arvizo",
"Tajuana Behringer", "Tamara Havel", "Anya Gemmill", "Mel Bustle", "Tandy Nash",
"Hue Stefan", "Reina Streett", "Glennie Kist", "Latricia Li", "Juliette Bureau"};

string listOfSponsors[75] = {"Abercrombie & Fitch Co.", "ABM Industries Incorporated", "Ace Hardware Corporation", "ACT Manufacturing Inc.", 
"Acterna Corp.", "Adams Resources & Energy, Inc.", "ADC Telecommunications, Inc.", "Adelphia Communications Corporation", 
"Administaff, Inc.", "Adobe Systems Incorporated", "Adolph Coors Company", "Advance Auto Parts,Inc.", "Advanced Micro Devices, Inc.", "AdvancePCS, Inc.", "Advantica Restaurant Group, Inc.",
"The AES Corporation", "Aetna Inc.", "Affiliated Computer Services, Inc.", 
"AFLAC Incorporated", "AGCO Corporation", "Agilent Technologies, Inc.", 
"Agway Inc.", "Apartment Investment and Management Company", 
"Air Products and Chemicals, Inc.", "Airborne, Inc.", "Airgas, Inc.",
"AK Steel Holding Corporation", "Alaska Air Group, Inc.", "Alberto-Culver Company", "Albertson's, Inc.", "Alcoa Inc.",
"Alleghany Corporation", "Allegheny Energy, Inc.", 
"Allegheny Technologies Incorporated", "Allergan, Inc.", "ALLETE, Inc.", 
"Alliant Energy Corporation", "Allied Waste Industries, Inc.", 
"Allmerica Financial Corporation", "The Allstate Corporation", "ALLTEL Corporation", 
"The Alpine Group, Inc.", "Amazon.com, Inc.", "AMC Entertainment Inc.", "American Power Conversion Corporation", "Amerada Hess Corporation", "AMERCO", 
"Ameren Corporation", "America West Holdings Corporation", "American Axle & Manufacturing Holdings, Inc.", 
"American Eagle Outfitters, Inc.", "American Electric Power Company, Inc."};


for (n=1; n<21; n++)  //Assign starting values to the car.
	{
	car[n].totalMiles=0;
	car[n].speed= rand() % 60 + 61;
	car[n].driverName=driverNameList[n];
	car[n].sponsorName=listOfSponsors[n];
	car[n].carNum=n;	
	}

int currentSpeed; //Varible to be passed into function for making progress down the course
n=1; //set n = to 1 sincei ts is currently 21
while (1==1) //Infinite loop till conditions for break are met
{	
	currentSpeed=car[n].speed; 
	car[n].totalMiles= car[n].totalMiles + makeProgress(currentSpeed); 
	car[n].speed= randomizer ();
	cout << "Car #"<<car[n].carNum << " driven by " << car[n].driverName <<" sponsored by " << car[n].sponsorName<< " has gone " << car[n].totalMiles << " miles and is currently going " << car[n].speed << endl; //Displays the current stats

	if (car[n].totalMiles>100)
	{
	break; //End loop if win conditions met.
	}
	else if (n==20) //Sends n back to 1 when it does car #20.
	{
	n=1;
	}
	else 
	n++;
	
}
cout << "The winner is car #" << car[n].carNum << " driven by " << car[n].driverName <<  " and sponsored by " << car[n].sponsorName << "."; //Display the winner
		return 0;
}

double makeProgress(double currentSpeed)
{
	double newMiles;
	newMiles = (currentSpeed/60/5); // MPH / 60 is Miles per minute. Since 5 loops = one minute we divide by 5 as well
	return newMiles;  
}
double randomizer() //Send new speed to the loop
{
	double newSpeed;
	newSpeed = rand() % 60 + 61;
	return newSpeed;
}

