//*************************************************
//*******            Benjamin Yi           ********
//*** This program uses the user's inputs for   ***
//*** the coefficients of a quadratic equation  ***
//*** to determine the discriminant and to find ***
//*** the root(s) of the equation.              ***
//*************************************************

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;
    cout << "Enter a value for c: ";
    cin >> c;
    
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0)
        {
        double positiveroot = (-b + sqrt(discriminant)) / (2 *a);
        double negativeroot = (-b - sqrt(discriminant)) / (2 *a);
            cout << "The discriminant is " << discriminant << endl;
            cout << "The two real roots are: " << negativeroot << " and " << positiveroot;
            
        }
    else;
    if (discriminant < 0)
        {
        double x = (-b)/(2 * a);
        double d = -1*discriminant;
        double y = sqrt(d)/(2 * a);
            cout << "The discriminant is " << discriminant << endl;
            cout << "The two imaginary roots are: " << x << " + " << y << "i and " << x << " - " << y << "i.";
        }
    else;
    if (discriminant == 0)
        {
        double root = (-b + sqrt(discriminant)) / (2 * a);
            cout << "The discriminant is " << discriminant << endl;
            cout << "The unique real root is: " << root;
        }
    cout << endl;
    return 0;
}

