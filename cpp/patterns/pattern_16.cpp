/*
pattern :

A B C D
F G H I
K L M N
P Q R S

*/

#include <iostream>
using namespace std;

int main()
{

    int n{};

    cout << "Enter The number :";
    cin >> n;
    char start = 'A';

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {

            cout << start << " ";
            start++;
        }
        cout << endl;
    }

    return 0;
}