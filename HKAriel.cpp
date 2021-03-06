/*
Justin Rawlings
10/14/2018
Name: HKAriel
HK-Ariel search.
*/

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Main program starts here
int main()
{
	srand(static_cast<unsigned int>(time(0)));

	//Random number generator for the enemy.
	int targetNumber = rand() % 64 + 1;
	std::cout << "Initializing Skynet\n";

	//Random number generator for the search grid.
	int searchGridHighNumber = rand() % 64 + 1;
	int searchGridLowNumber = rand() % 64 + 1;

	//Automatic guess for the skynet program.
	int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
	int attempt = 0;
	cout << "Current location of target is \n" << targetNumber;
	cout << " is the area Skynet is searching. \n" << targetLocationPrediction;

	//Loop statements for skynet to find enemy.
do
{
	if (targetNumber > targetLocationPrediction)
	{

		int searchGridLowNumber = rand() % 64 + 1;
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;

		cout << "Skynet did not find enemy combatant.\n";
		cout << targetLocationPrediction << " is the next location to search. \n";
		++attempt;
	}
	else if (targetNumber < targetLocationPrediction)
	{
		cout << "Skynet did not find enemy combatant.\n";
		cout << targetLocationPrediction << " is the next location to search. \n";
		++attempt;
	}
	else (targetNumber == targetLocationPrediction);
	{
		cout << "Enemy combatant killed.\n";
	}
	} while (attempt != targetNumber);
	return 0;
} 

