#include <iostream>
using namespace std;

int main()
{
    char ch{};
    cout << "Enter the value :" << endl;
    cin >> ch;

    if (ch >= 97 && ch <= 122)
    {
        cout << "LowerCase" << endl;
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "UpperCase" << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "Numeric Value" << endl;
    }
    else
    {
        cout << "Unknown....!" << endl;
    }

    return 0;
}