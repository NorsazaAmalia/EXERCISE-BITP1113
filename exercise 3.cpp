// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void star()
{
	cout << "This is lab 4" << endl;
	cout << "Norsaza Amalia Binti Mohd Saiful Abidin , Do Exercise" << endl;
}

int main()
{
	star();

	float price = 9.90, totalprice;
	int quantity;
	const int DISC = 10;

	cout << "Please enter the quantity: " << endl;
	cin >> quantity;

	totalprice = (price*quantity) * (100-DISC)/100.00;
	cout << "Your totalprice is: " << totalprice << endl;
	
    return 0;
}

