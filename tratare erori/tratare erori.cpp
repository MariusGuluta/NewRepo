#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

int main()
{
	try
	{
		int age = 25;
		if (age >= 26) {
			cout << "Welcome old man.";
		}
		else {
			throw (age);
		}
	}
	catch (int myAger)
	{
		cout << "You are to young \n";
		cout << "Your age is: " << myAger;
	}
	return 0;
}

