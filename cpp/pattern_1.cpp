/*
pattern :

****
****
****

*/

#include <iostream>
using namespace std;

int main()
{

    int n{};
    cout << "Enter the  number :" << endl;
    cin >> n;

    /*
    // while-loop

    int i{1};
    while (i <= n)
    {
        int j{1};
        while (j <= n)
        {
            cout << "*";
            ++j;
        }
        cout << endl;
        ++i;
    }
    */

    for (int i{1}; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}