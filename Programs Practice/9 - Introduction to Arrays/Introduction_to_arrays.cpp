#include<iostream>
using namespace  std;

void printArray(int arr[], int len) {
	
	for(int i=0;i<len;i++) {
		cout << arr[i] << "\t";
	}
	
}

int main() {
	
	// Declaration of an array
	int first[5] = {1, 2, 3, 4, 5};
	
	/*
	int nums[5] = {0}
	
	// Remember, initialisation of all elements of array with a single value can only be done with 0s
	*/
	
	// Printing of an array
	int n = 5;
	for(int i=0;i<n;i++) {
		cout << first[i] << "\t";
	}
	
	cout << endl << endl;
	
	// Printing of an array with the help of a function
	printArray(first, n);
	
	return 0;
	
}