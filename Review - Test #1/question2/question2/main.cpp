#include <iostream>

using namespace std;

int main()
{
    int i;
    for (i = 1; i < 200; i = i + 2)
    {
        if (i%10==1)
            cout << endl;
        cout << i << " ";
    }
    
    return 0;
}