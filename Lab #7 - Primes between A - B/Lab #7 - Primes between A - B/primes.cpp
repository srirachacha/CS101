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
void userinputs (inputs &data);
//void useroutputs (inputs &data);

int main()
{
}

void userinputs(inputs &data)
{
    cout << "Enter a minimum value: "; cin >> data.min;
    cout << "Enter a maximum value: "; cin >> data.max;
}



//void useroutputs (inputs &data)