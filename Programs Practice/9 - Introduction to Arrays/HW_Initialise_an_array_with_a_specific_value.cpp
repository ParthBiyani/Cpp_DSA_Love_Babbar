#include<iostream>
using namespace std;

int main() {
	
	int a[10] ,val;
	cout << "Enter the int value you want to initialise the array with: ";
	cin >> val;
	
	for(int i=0;i<10;i++) {
		a[i] = val;
	}
	
	cout << endl;
	
	for(int i=0;i<10;i++) {
		cout << a[i] << "\t";
	}
	
	return 0;
	
}