//
//  main.cpp
//  final
//
//  Created by Benjamin Yi on 3/30/14.
//  Copyright (c) 2014 Benjamin Yi. All rights reserved.
//

#include <iostream>
using namespace std;

struct createchar {string CLASS; string MODE;};
createchar stats;
char userinputs(createchar &stats);

int main(int argc, const char * argv[])
{
    userinputs(createchar);
    return 0;
}

char userinputs(createchar &stats)
{
    char CHAR_CHOICE ;
    cout << "Choose a character: " << endl;
    cout << "1) Warrior" << endl;
    cout << "2) Mage"    << endl;
    cout << "3) Rogue"   << endl;
    cout << "4) Cleric"  << endl;
    cin >> CHAR_CHOICE;
    
    switch (CHAR_CHOICE)
    {
        case 1: cout << "You've chosen: Warrior. Health: " << /*basehp <<*/ ". Attack: " << /*baseatk <<*/ ".";
        case 2: cout << "You've chosen: Mage. Health: " << /*basehp <<*/ ". Attack: " << /*baseatk <<*/ ".";
        case 3: cout << "You've chosen: Rogue. Health: " << /*basehp <<*/ ". Attack: " << /*baseatk <<*/ ".";
        case 4: cout << "You've chosen: Cleric. Health: " << /*basehp <<*/ ". Attack: " << /*baseatk <<*/ ".";
    }
    return CHAR_CHOICE;
}