#include <iostream>
using namespace std;
int fact(int n);
int main()
{
    auto result = fact(5);
    cout << "Result :" << result << endl;
    return 0;
}
int fact(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}