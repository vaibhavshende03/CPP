#include <iostream>
using namespace std;

int main()
{
    int num = 3;

    for (int i = 2; i < num; ++i)
    {
        if (num % i != 0)
        {
            cout << "number is  prime" << endl;
            break;
        }
        else
        {
            cout << "number is not prime" << endl;
            break;
        }
    }

    return 0;
}