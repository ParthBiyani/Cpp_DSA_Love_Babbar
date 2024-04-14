#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    while (n)
    {

        if (n & 1)
        {

            count++;
        }

        n = n >> 1;
    }

    if (count == 1)
    {

        cout << "Power of 2";
    }
    else
    {

        cout << "Not a power of 2";
    }
}