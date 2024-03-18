#include <iostream>
using namespace std;
/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
int main()
{

    int n{};
    cout << "Enter The Number :";
    cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << n - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n - j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}