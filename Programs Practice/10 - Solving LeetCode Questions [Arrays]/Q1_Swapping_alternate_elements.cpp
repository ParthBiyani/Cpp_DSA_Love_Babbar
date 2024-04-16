#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
	
	cout << endl;
	for(int i=0;i<size;i++) {
		cout << arr[i] << " ";
	}
	
}

void alternateSwap(int arr[], int size) {
	
	for(int i=0;i<size-1;i+=2) {
		swap(arr[i], arr[i+1]);
	}
	
}

int main() {
	
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int brr[5] = {1, 2, 3, 4, 5};
	
	alternateSwap(arr, 6);
	alternateSwap(brr, 5);
	
	printArray(arr, 6);
	printArray(brr, 5);
	
	return 0;;
	
}