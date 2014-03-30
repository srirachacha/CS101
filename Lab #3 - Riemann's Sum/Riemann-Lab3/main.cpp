//*******************************************************
//********** Benjamin Yi                       **********
//***** This program finds the value of a zeta      *****
//***** function of a number, x, where a zeta       *****
//***** function is the summation of [1/(n^x)]      *****
//***** from 1 to infinity.                         *****
//*******************************************************

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char ans;
    double x;
    do
    {
        double sum = 0;
        cout << "Enter an x value: ";
        cin >> x;

        cout << "The sum is: ";
        
        for (int n = 1; 1/pow(n, x) > pow(10, -7); n++)
        {
            sum += 1/pow(n, x);
        }
        cout << sum << endl;
        cout << "Continue? Enter 'y' or 'Y' to continue or any other key to quit: ";
        cin >> ans;
        cout << endl;
    }
    while (ans == 'Y' || ans == 'y');
    return 0;
}