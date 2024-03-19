/*
pattern :

A B C D E
B C D E F
C D E F G
D E F G H
E F G H I

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

            char start = 'A' + i + j - 2; // imp

            cout << start << " ";
        }
        cout << endl;
    }

    return 0;
}