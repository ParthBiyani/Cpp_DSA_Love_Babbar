#include<iostream>
using namespace std;

int getPivot(int arr[], int size) {
	
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;
	
	while(start < end) {
		
		if(arr[mid] >= arr[0]) {
			start = mid + 1;
		} else {
			end = mid;
		}
		mid = start + (end-start)/2;
		
	}
	return start;
	
}

int main() {
	
	int size = 5;
	int arr[size] = {7, 8, 10, 1, 3};
	
	cout << "Pivot is at index " << getPivot(arr, size) << endl;
	
	return 0;
	
}