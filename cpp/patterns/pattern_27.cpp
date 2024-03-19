#include <iostream>
using namespace std;

/*
1234554321
1234**4321
123****321
12******21
1********1
*/

int main()
{

    int n{};

    cout << "Enter The number :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // triangle1
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }

        // triangle2
        for (int k = 3; k <= i * 2; k++)
        {
            cout << "*";
        }

        // triangle3

        for (int l = n - i + 1; l >= 1; l--)
        {
            cout << l;
        }

        cout << endl;
    }

    return 0;
}