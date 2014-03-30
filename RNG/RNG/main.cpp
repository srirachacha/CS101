//
//  main.cpp
//  RNG
//
//  Created by Benjamin Yi on 3/23/14.
//  Copyright (c) 2014 Benjamin Yi. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    char flag;
    int i;
    srand((unsigned int)time(NULL));
    cout << "Press 1 to start\n"; cin >> flag;
    while (flag == '1')
    {
        cout << "Numbers: Mid:   " << setw(4) << rand() % 899 + 100 << endl;
        cout << "Numbers: Eve:   " << setw(4) << rand() % 899 + 100 << endl << endl;
        cout << "Win4: Mid:      " << rand() % 8999 + 1000 << endl;
        cout << "Win4: Eve:      " << rand() % 8999 + 1000 << endl << endl;
        cout << "Powerball:      ";
        for (i = 1; i <= 5; i++) cout << setw(2) << rand() % 58 + 1 << " ";
        cout << "and " << rand() % 34 + 1 << endl << endl;
        cout << "Mega Millions:  ";
        for (i = 1; i <= 5; i++) cout << setw(2) << rand() % 74 + 1 << " ";
        cout << "and " << rand() % 14 + 1 << endl << endl;
        cout << "Lotto: Set 1:   ";
        for (i = 1; i <= 12; i++)
        {
            cout << setw(2) << rand() % 58 + 1 << " ";
            if (i%6 == 0 && i < 12)
            cout << endl << "       Set 2:   ";
        }
        cout << endl << endl;
        cout << "Sweet Million:  ";
        for (i = 1; i <= 6; i++) cout << setw(2) << rand() % 39 + 1 << " ";
        cout << endl << endl;
        cout << "Go (Press 1)"; cin >> flag; cout << endl;
    }while (flag == '1');
}

