// name: Lilit Khamalyan
// date: 1/07/2020
// Program 2-24: This program extracts the righmost digit of a number.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
     int number = 125;
     int rightMost = number % 10;
     // Display the result
     cout << "The rightmost digit in " << number << " is " << rightMost << endl;
     system("pause");
     return 0;
}
