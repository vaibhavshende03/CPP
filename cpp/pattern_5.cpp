/*
pattern :

3 2 1
3 2 1
3 2 1

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
            cout << n - j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}