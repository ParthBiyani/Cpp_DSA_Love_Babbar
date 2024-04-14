#include<iostream>
using namespace std;

int findNoOfSetBits(int a) {
	
	int c=0;
	while(a>0) {
		if(a&1) {
			c++;
		}
		a = a >> 1;
	}
	return c;
	
}

int main() {
	
	int a, b, num=0;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	num = num + findNoOfSetBits(a);
	num = num + findNoOfSetBits(b);
	
	cout << "No. of set bits are " << num;
	
	return 0;
	
}