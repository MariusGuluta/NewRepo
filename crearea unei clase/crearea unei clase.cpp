#include "pch.h"
#include <iostream>
#include <string>


using namespace System;
using namespace std;

//create a class

class Food {
public:
    double cal;
    double gram;

    double calculateKCalPerGram() {
        return cal / gram;

    }
};

int main()
{
    //create an object of the Room class
    Food cal1;

    cal1.cal = 250;
    cal1.gram = 43;

    cout << " Expected calories/gram are = " << cal1.calculateKCalPerGram() << " Cal/g" << endl;

    return 0;
}
