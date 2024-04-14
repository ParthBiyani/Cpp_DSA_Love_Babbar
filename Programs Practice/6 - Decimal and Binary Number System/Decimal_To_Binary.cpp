#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number you want binary of: ";
    cin >> n;

    double ans = 0;
    int i = 0;

    if (n > 0)
    {
        while (n != 0)
        {

            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            i++;
            n = n >> 1;
        }
    }
    else if (n < 0)
    {

        // Still not found a correct way simple enough
    }

    cout << "Answer is " << ans;
}