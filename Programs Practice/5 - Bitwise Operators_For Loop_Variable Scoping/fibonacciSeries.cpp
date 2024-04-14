#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 1; i <= n - 2; i++)
    {

        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }
}