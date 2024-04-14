#include<iostream>
using namespace std;

int findElement(int n) {
	
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	
	int a=0, b=1;
	
	for(int i=3;i<=n;i++) {
		int next = a+b;
		a = b;
		b = next;
	}
	return b;
	
}

int main() {
	
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	cout << "The " << n << "th element of the fibonacci series is " << findElement(n); 
	
	return 0;
	
}