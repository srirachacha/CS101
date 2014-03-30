//Benjamin Yi

#include <iostream>
using namespace std;

int main()
{
    char MOVE;
    do
    {
        cout << "Press and enter a number from the menu for your next move:\n";
        cout << "1. Forward\n";
        cout << "2. Backward\n";
        cout << "3. Left\n";
        cout << "4. Right\n";
        cout << "5. Run away!\n";
        cout << "Enter here: ";
        cin >> MOVE;
        cout << endl;

             if (MOVE == '1') cout << "You move forward..." << endl;
        else if (MOVE == '2') cout << "You move backward..." << endl;
        else if (MOVE == '3') cout << "You move left..." << endl;
        else if (MOVE == '4') cout << "You move right..." << endl;
        else if (MOVE == '5') cout << "You flee!" << endl;
        else                  cout << "Invalid key." << endl;
        
        cout << endl;
        
    }while (MOVE != '5');
    return 0;
}