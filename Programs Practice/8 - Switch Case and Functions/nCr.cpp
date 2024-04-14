#include <iostream>
using namespace std;

// Function Signature
int fact(int n) {
	
	// Function Body
	int fact = 1;
	for(int i=2;i<=n;i++) {
		fact = fact * i;
	}
	
	return fact;
}

int nCr(int n, int r) {
	
	int numer = fact(n);
	int denom = fact(r) * fact(n-r);
	int ans = numer/denom;
	
	return ans;
	
}

int main() {
	
	int n, r;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << "Enter the value of r: ";
	cin >> r;
	cout << "The value of nCr is: " << nCr(n, r); 	// Function Calling
	
	return 0;
	
}