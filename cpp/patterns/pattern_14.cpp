/*
pattern :

A A A A A A
B B B B B B
C C C C C C
D D D D D D
E E E E E E
F F F F F F
*/

#include <iostream>
using namespace std;

int main()
{

    int n{};

    cout << "Enter The number :";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
        }
        cout << endl;
    }

    //--------------------------------------------------------------------------
    // char n{};

    // cout << "Enter The number :";
    // cin >> n;

    // for (char i = 'A'; i <= n; ++i)
    // {
    //     for (char j = 'A'; j <= n; ++j)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}