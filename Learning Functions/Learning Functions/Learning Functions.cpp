#include "pch.h"
#include <iostream>
#include <string>;

using namespace std;

int GetTextFromUser()
{
	cout << "This is GetTextFromUser!!\n";
	char userText[1000];
	printf("Please enter a string!\n");
	cin.get(userText, 1000);
	cout << "I have taken your string of:\n";
	cout << userText << endl;
	return 0;
}

int GetNumbersFromUser()
{
	cout << "This is GetNumbersFromUser!!\n";
	char userNumber[1000];
	printf("Please enter a string!\n");
	cin.get(userNumber, 1000);
	cout << "I have taken your string of:\n";
	cout << userNumber << endl;
	return 0;
}

int main()
{
    cout << "This is main!!\n";
	GetNumbersFromUser();
	GetTextFromUser();
}

