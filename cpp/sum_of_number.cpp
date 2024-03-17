#include <iostream>
using namespace std;

int main()
{
    // Sum of number
    // auto n{5};
    // auto sum{0};

    // for (auto i{1}; i <= n; ++i)
    // {
    //     sum += i;
    // }

    // sum of elements in array
    int n[5]{1, 2, 3, 4, 5};
    auto sum{0};

    for (auto i{0}; i <= 4; ++i)
    {
        sum += n[i];
    }

    cout << "Sum Is :" << sum << endl;
}