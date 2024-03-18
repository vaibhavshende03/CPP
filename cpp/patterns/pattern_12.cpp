#include <iostream>
using namespace std;
/*
1
2 1
3 2 1
4 3 2 1
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
    //         cout << i - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}