#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;

    char op;
    cout << "Enter the operation you want to perform: ";
    cin >> op;

    switch (op)
    {

    case '+':
        cout << "The answer is " << a + b << endl;
        break;

    case '-':
        cout << "The answer is " << a - b << endl;
        break;

    case '/':
        cout << "The answer is " << a / b << endl;
        break;

    case '*':
        cout << "The answer is " << a * b << endl;
        break;

    case '%':
        cout << "The answer is " << a % b << endl;
        break;

    default:
        cout << "Enter a valid operation from +, -, /, * and %" << endl;
    }
}