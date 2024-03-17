#include <iostream>
using namespace std;

int main()
{
    int sum{0};
    int n{};

    cout << "Enter The 'Nth' number :" << endl;
    cin >> n;
    /*
    //while loop
    int i{2};
     cout << "Sum = ";
     while (i <= n)
     {

         if (i % 2 == 0)
         {
             cout << i << "+";
             sum += i;
         }
         ++i;
     }
     */

    // for loop
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << "\nThe Sum of N even number is :" << sum << endl;
    return 0;
}