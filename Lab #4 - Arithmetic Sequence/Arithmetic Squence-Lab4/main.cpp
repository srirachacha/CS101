//************************************************************
//************************************************************
//*****------------------- Benjamin Yi ------------------*****
//************************************************************
//***** This program displays the terms of an arithmetic *****
//***** sequence and then adds up the terms to show      *****
//***** the sum.                                         *****
//************************************************************
//************************************************************

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double a, d, n, i;
    char ANS;
    double sum = 0.0;
    do
    {
        cout << "Enter a starting number:   "; cin >> a;
        cout << "Enter a common difference: "; cin >> d;
        cout << "Enter the number of terms: "; cin >> n;
        cout << endl;
        
        long double LAST_TERM = (a + (n - 1)*d);
        cout << "The sequence is: {";
        
        for (i = a; abs(i) <= abs(LAST_TERM) && d != 0; i = i + d)
        {
            sum += i;
            if (i != LAST_TERM) cout << i << ", ";
            else if (i == LAST_TERM)
            {
                cout << i << "}" << endl;
                cout << "The sum is: " << sum << endl;
            }
        }
        
        if (d == 0)
        {
            for (i = 1; i <= n; i++)
            {
                sum += a;
                if (i < n) cout << a << ", ";
                else if (i == n)
                {
                    cout << a << "}" << endl;
                    cout << "The sum is: " << sum << endl;
                }
            }
        }
        
        cout << "Enter a new sequence? Press and enter 'y' or 'Y' to continue, anything else to quit. ";
        cin >> ANS;
        cout << endl;
        
    }while (ANS == 'y' || ANS == 'Y');
    return 0;
}