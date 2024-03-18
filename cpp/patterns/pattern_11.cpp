
/*
pattern :
1
23
345
4567
56789
*/

#include <iostream>
using namespace std;

int main()
{

    int n{};
    cout << "Enter The Number :";
    cin >> n;
    /*
        // while-loop

        int row = 1;
        int value = row;
        while (row <= n)
        {
            int col = 1;
            while (col <= row)
            {
                cout << value << " ";
                value++;

                col++;
            }
            cout << endl;
            row++;
        }

        */

    //    for-loop

    for (int i = 1; i <= n; i++)
    {
        int count = i;
        for (int j = 1; j <= i; j++)
        {
            cout << count << "";
            count++;
        }
        cout << endl;
    }

    return 0;
}