/*
-----------
pattern :
----------
1111
 222
  33
   4
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
        for (int space = 0; space < i - 1; space++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i + 1; ++j)
        {

            cout << i;
        }
        cout << endl;
    }

    return 0;
}