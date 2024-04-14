#include <iostream>
using namespace std;

int main() {

    int amt;
    cout << "Enter Amount: ";
    cin >> amt;
    cout << endl;

    int Rs500, Rs200, Rs100, Rs50, Rs20, Rs10, Rs5, Rs1;

    switch (1)
    {

    case 1:
        Rs500 = amt / 500;
        cout << "Number of 500 Rupee notes reqd: " << Rs500 << endl;
        amt %= 500;

    case 2:
        Rs200 = amt / 200;
        cout << "Number of 200 Rupee notes reqd: " << Rs200 << endl;
        amt %= 200;

    case 3:
        Rs100 = amt / 100;
        cout << "Number of 100 Rupee notes reqd: " << Rs100 << endl;
        amt %= 100;

    case 4:
        Rs50 = amt / 50;
        cout << "Number of 50 Rupee notes reqd: " << Rs50 << endl;
        amt %= 50;

    case 5:
        Rs20 = amt / 20;
        cout << "Number of 20 Rupee notes reqd: " << Rs20 << endl;
        amt %= 20;

    case 6:
        Rs10 = amt / 10;
        cout << "Number of 10 Rupee notes reqd: " << Rs10 << endl;
        amt %= 10;

    case 7:
        Rs5 = amt / 5;
        cout << "Number of 5 Rupee notes reqd: " << Rs5 << endl;
        amt %= 5;

    case 8:
        Rs1 = amt / 1;
        cout << "Number of 1 Rupee notes reqd: " << Rs1 << endl;
    }

    cout << endl;
}