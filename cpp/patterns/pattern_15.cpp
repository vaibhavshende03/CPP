/*
pattern :

A B C D
A B C D
A B C D
A B C D

*/

#include <iostream>
using namespace std;

int main()
{
    /*
        int n{};

        cout << "Enter The number :";
        cin >> n;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                char ch = 'A' + j - 1;
                cout << ch << " ";
            }
            cout << endl;
        }
    */
    //--------------------------------------------------------------------------
    int n{};

    cout << "Enter the number :";
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        int j = 1;

        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    //--------------------------------------------------------------------------

    return 0;
}