#include <iostream>
using namespace std;

int main()
{
    int sum{0};
    int i{1};
    int n{};
    cout << "Enter The 'Nth' number :" << endl;
    cin >> n;

    while (i <= n)
    {
        sum += i;
        ++i;
    }

    cout << "The Sum of N number is :" << sum << endl;
    return 0;
}