#include <iostream>
using namespace std;

int L;		//This is not an ideal location - we will soon address this


void drawLine(int length)
{
	for (unsigned int n = 0; n < (length + 4); n++) 
	{
		cout << "*";
	}
	cout << endl;
}


void displayBanner(string text)
{
	int strLength = text.length();

	drawLine(strLength);

	cout << "* ";				//Leading *
	cout << text;		    	//Message
	cout << " *" << endl;		//Trailing *

	drawLine(strLength);
}

int main()
{
	const string message = "Welcome to Computer Science !!!";

	displayBanner(message);

	return 0;
}

 // Code covers tasks 01/03
