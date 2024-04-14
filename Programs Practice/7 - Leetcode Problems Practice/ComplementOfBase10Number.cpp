#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int mask = 0;
    int m = n;
    int ans = 0;

    if (m == 0)
    {

        ans = 1;
    }
    else
    {

        while (m)
        {

            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        ans = (~n) & mask;
    }
    cout << "The base 10 complement of " << n << " is " << ans;
}