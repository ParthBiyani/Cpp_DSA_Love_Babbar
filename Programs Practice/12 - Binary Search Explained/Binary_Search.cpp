#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
	
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;
	
	while(start <= end) {
		
		if(arr[mid] == key) {
			return mid;
		}
		else if(arr[mid] > key) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		mid = start + (end-start)/2;
		
	}
	return -1;
	
}

int main() {
	
	int evenSize = 6, oddSize = 5, evenKey = 13, oddKey = 13;
	int even[evenSize] = {2, 4, 6, 8, 12, 18};
	int odd[oddSize] = {3, 8, 11, 14, 16};
	
	int evenIndex = binarySearch(even, evenSize, evenKey);
	cout << endl << "Index of " << evenKey << " is " << evenIndex << endl;
	
	int oddIndex = binarySearch(odd, oddSize, oddKey);
	cout << endl << "Index of " << oddKey << " is " << oddIndex << endl;
	
	return 0;
	
}