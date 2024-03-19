/*
-----------
pattern :
----------
   1
  121
 12312
1234123
----------
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
        for (int space = 0; space < n - i; space++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; ++j)
        {

            cout << j;
        }
        for (int k = 1; k < i; k++)
        {
            cout << k;
        }

        cout << endl;
    }

    return 0;
}