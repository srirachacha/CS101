// *************************************************************************
// Benjamin Yi
//
// This program uses the inputs of the sides of a triangle and calculates the
// triangle's semi-perimeter (s) as well as its area (a) using Heron's
// Formula.
//
// *************************************************************************

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Input side A: ";
    cin >> a;
    cout << "Input side B: ";
    cin >> b;
    cout << "Input side C: ";
    cin >> c;
    
    double s = ((a+b+c)/2);
    cout << "The semi-perimeter is " << s << " units." << endl;
    
    double A = sqrt(s*(s-a)*(s-b)*(s-c));
    if (A > 0)
        cout << "The area is " << A << " units." << endl;
    else
        cout << "There is no area." << endl;
    
    if (A <= 0)cout << "The triangle with the sides " << a << ", " << b << ", " << c << " is not a triangle.";
    cout << endl;
    if (a + b <= c || a + c <= b || c + b <= a) cout <<"The triangle with sides "<< a << ", " << b << ", " << c << " has a semi-perimeter. " << endl;
    else;
    
    return 0;
}


