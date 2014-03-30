//
//  main.cpp
//  Lab #7 - Primes between A - B
//
//  Created by Benjamin Yi on 3/24/14.
//  Copyright (c) 2014 Benjamin Yi. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

struct inputs {int min; int max;};
inputs data;
void userinputs(inputs &data);
bool primecheck(int x);
long PRIMES;
void useroutputs(inputs &data);
int MAX = 1000000;

int main()
{
    int i, n = 0;
    int PRIMES[MAX];
    userinputs(data);
    for (i = data.min; i <= data.max; i++)
    {
        if(primecheck(i) == true) PRIMES[n++] = i;
    }
    useroutputs(data);
}

void userinputs(inputs &data)
{
    cout << "Enter a minimum value: "; cin >> data.min;
    cout << "Enter a maximum value: "; cin >> data.max;
}

bool primecheck(int x)
{
    if (x < 2) return false;
    for(int i=2; i<= sqrt(x); i++) {
        if ((x%i) == 0) return false;
    }
    return true;
}

void useroutputs (inputs &data)
{
    cout << PRIMES;
}