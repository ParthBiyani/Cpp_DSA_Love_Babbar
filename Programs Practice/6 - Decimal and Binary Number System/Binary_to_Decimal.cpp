#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the binary number you want decimal representation of: ";
    cin >> n;

    int i = 0, ans = 0;
    while (n)
    {

        int digit = n % 10;
        ans = ans + (pow(2, i) * digit);
        n = n / 10;
        i++;
    }

    cout << "Answer is " << ans;
}