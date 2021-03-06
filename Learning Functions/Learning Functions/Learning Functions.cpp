// 08 Assignment - Learning Functions with Interactive Fiction

#include "pch.h"
#include <iostream>
#include <string>;

using namespace std;

string GetTextFromUser(string prompt) // Declare and initialize the string function GetTextFromUser
{
	string userTextString; // Declare and initialize the string userTextString
	cout << prompt;        // Output the string prompt that has been passed to it 
	cin >> userTextString; // Receive the user input and store it as a variable
	return userTextString; // Return to the main function with the result of running this function
}

int GetNumberFromUser(string prompt)
{
	int userIntegerString;          // Declare and initialize the string userIntegerString
	cout << prompt;                 // Output the string prompt that has been passed to it 
	cin >> userIntegerString;       // Receive the user input and store it as a variable
	return userIntegerString;       // Return to the main function with the result of running this function

}


int main()
{
	string response_1 = GetTextFromUser("What is your favorite color? \n"); // Save the string response_1 as the result of GetTextFromUser("What is your favorite color? ")
	int response_2 = GetNumberFromUser("What is your favorite number? \n"); // Save the integer response_2 as the result of GetNumberFromUser("What is your favorite number? ")
	cout << "\nYour favorite color is " << response_1 << ", and your favorite number is " << response_2 << ".";
	return 0; // Return Statement
}