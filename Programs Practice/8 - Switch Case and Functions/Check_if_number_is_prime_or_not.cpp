#include <iostream>
using namespace std;

bool isPrime(int num) {
	
	for(int i=2;i<num;i++) {
		if(num%i == 0) {
			return 0;
		}
	}
	return 1;
	
}

int main() {
	
	int num;
	cout << "Enter the number you want to check for Prime: ";
	cin >> num;
	
	if(isPrime(num)) {
		cout << "The number is Prime" << endl;
	} else {
		cout << "The number is not Prime" << endl;
	}
	
	return 0;
	
}