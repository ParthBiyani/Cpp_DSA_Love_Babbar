#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = 0;
    while (n)
    {

        int digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;
    }

    cout << endl
         << "The reverse of the given number is: " << ans;
}