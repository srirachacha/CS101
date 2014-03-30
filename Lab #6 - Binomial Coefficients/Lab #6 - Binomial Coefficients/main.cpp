//*******************************************************
//*****-----------------Benjamin Yi-----------------*****
//*****---------------------------------------------*****
//***** This program uses the inputs for 'n' and    *****
//***** 'k' to calculate the binomial coefficient,  *****
//***** or the possibile number of 'k' combinations *****
//***** among 'n' number of choices.                *****
//*******************************************************

#include <iostream>
#include <cmath>

using namespace std;

struct inputs {int n; int k;};
inputs data;
void userinputs(inputs &data);
long double factorial (long x);
//void useroutput(inputs &data);

int main()
{
    char flag;
    do
    {
        userinputs(data);
        //useroutput(data);
        cout << factorial(data.n) << " " << factorial(data.k) << " " << factorial(data.n - data.k) << endl;
        cout << (factorial(data.n)/((factorial(data.k))*(factorial(data.n-data.k)))) << endl;
        cout << ((factorial(data.n))/(factorial(data.n-data.k)))/(factorial(data.k));
        cout << endl << endl;
        cout << "Continue? Enter 'y' or 'Y' to continue, anything else to quit.";
        cin >> flag;
        cout << endl;
    }while (flag == 'y' || flag == 'Y');
}

void userinputs(inputs &data)
{
    cout << "Enter a value for n: "; cin >> data.n;
    cout << "Enter a value for k: "; cin >> data.k;
}


long double factorial (long x)
{
    int i;
    int fact = 1;
    for (i = 1; i <= x; i++)
        fact = fact * i;
    
    return fact;
};

/*void useroutput(inputs &data)
{
    cout << "Binomial coefficient of C(" << data.n << ", " << data.k << "): ";
         if (data.k >= 0 && data.k <= data.n)
                              cout << (factorial(data.n)/((factorial(data.k))*(factorial(data.n - data.k))));
    else if (data.n < 0)      cout << "Invalid input. 'n' cannot be negative.";
    else if (data.k < 0)      cout << "Invalid input. 'k' cannot be negative.";
    else if (data.k > data.n) cout << "Invalid input. 'k' cannot be greater than 'n'.";
}*/