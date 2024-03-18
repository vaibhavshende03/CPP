/*
1 2 3
4 5 6
7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
    int n{3};
    int count{1};
    // int i, j;

    // i = 1;
    // while (i <= n)
    // {
    //     while (j <= n)
    //     {
    //         j = 1;
    //         cout << count << " ";
    //         count = count + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}