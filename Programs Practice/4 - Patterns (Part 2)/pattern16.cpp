#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int space = n - row;
        while (space)
        {

            cout << " ";
            space = space - 1;
        }

        int col = 1;
        while (col <= row)
        {

            cout << col;
            col = col + 1;
        }

        int i = row - 1;
        while (i)
        {

            cout << i;
            i = i - 1;
        }

        cout << endl;
        row = row + 1;
    }
}