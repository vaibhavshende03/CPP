/*
pattern :

   *
  **
 ***
****

*/

#include <iostream>
using namespace std;

int main()
{

    int n{};

    cout << "Enter The number :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    /*
        int row = 1;
        while (row <= n)
        {
            // space print
            int space = n - row;

            while (space)
            {
                cout << " ";
                space = space - 1;
            }

            // star print

            int col = 1;
            while (col <= row)
            {
                cout << "*";
                col++;
            }
            cout << endl;
            row++;
        }
    */
    return 0;
}