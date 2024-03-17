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

    char n{};

    cout << "Enter The number :";
    cin >> n;

    for (char i = 'A'; i <= n; ++i)
    {
        for (char j = 'A'; j <= n; ++j)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}