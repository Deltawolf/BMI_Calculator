
#include "pch.h"
#include "Zach.h"
#include "Class.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

//int parseHeight(string);

int main()
{
	int totalParticipants = NULL;
	int parsedUserHeight = NULL;
	
	string userName = "";
	string starString = "";

	double userHeight = NULL;
	double userHeightFeet = NULL;
	double userHeightInches = NULL;
	double userWeight = NULL;

	bool userContinue = false;
	
	do
	{
		cout << "Welcome to the BMI calculator. Here you can compare the BMI of you and your friends.\n\n";
		totalParticipants = myInput(totalParticipants, "To get started, go ahead and let us know how many people we will be comparing today: ");

		vector<BMI> participants;
		//Create collection of objects to instantiate with for loop

		for (int i = 0; i < totalParticipants; i++)
		{

			cout << "\nWhat is the first and last name of participant number " << i + 1 << "?: " << endl;
			if (i > 0)
				cin.ignore();//cin will have a remaining \n in the input buffer

			userName = myInput(userName, "");
			userHeightFeet = myInput(userHeightFeet, "\nWhat is the participant's height in feet?\n");
			userHeightInches = myInput(userHeightInches, "\nWhat is the participant's height in inches?\n");
			userWeight = myInput(userWeight, "\nWhat is the participant's weight in pounds?\n");

			userHeight = userHeightFeet * 12 + userHeightInches;

			//Populates vector with our new object using constructor
			participants.push_back(BMI(userName, userHeight, userWeight));



			//Create new participant
			//Ask for name of participant
			//Ask for height as string
			//Parse string and convert to int function
			//Ask for weight of participant
			//Calculate and store name/BMI in vector of objects
		}

		//Create table
		cout << "\n" << starString.assign(33, '*') << "\n";
		cout << right << setw(20) << "BMI\n\n";

		for (int i = 0; i < participants.size(); i++)

			cout << setw(26) << left << participants[i].getName() << participants[i].getBMI() << endl;

		cout << "\n" << starString.assign(33, '*') << endl;

		//For each i in vector 1, output col 1 name, col 2 BMI

		userContinue = continueFunc("\nWould you like to calculate additional BMIs?: ");

	} while (userContinue);

	cout << endl;
}