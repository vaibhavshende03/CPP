/*
pattern :

A
B B
C C C
D D D D
E E E E E
*/

#include <iostream>
using namespace std;

int main()
{
    /*
        int n{};

        cout << "Enter The number :";
        cin >> n;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= i; ++j)
            {
                char ch = 'A' + i - 1;
                cout << ch << " ";
            }
            cout << endl;
        }
    */
    //--------------------------------------------------------------------------
    int n{};

    cout << "Enter the number :";
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        int j = 1;
        char ch = 'A' + i - 1;

        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    //--------------------------------------------------------------------------
    // char n{};

    // cout << "Enter The number :";
    // cin >> n;

    // for (char i = 'A'; i <= n; ++i)
    // {
    //     for (char j = 'A'; j <= i; ++j)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}