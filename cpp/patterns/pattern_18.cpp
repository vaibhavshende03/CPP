/*
pattern :
A
B B
C C C
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
        for (int j = 1; j <= i; ++j)
        {
            char start = 'A' + i - 1;

            cout << start << " ";
            start++;
        }

        cout << endl;
    }

    /*


    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {

            cout << start << " ";
        }
        start++;
        cout << endl;
    }

    */

    return 0;
}