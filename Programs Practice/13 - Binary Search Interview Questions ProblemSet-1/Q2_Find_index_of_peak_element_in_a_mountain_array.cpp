#include<iostream>
using namespace std;

int findPeakIndexInMountainArray(int arr[], int size) {
	
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;
	
	while(start < end) {
		if(arr[mid] < arr[mid+1]) {
			start = mid + 1;
		} else {
			end = mid;
		}
		mid = start + (end-start)/2;
	}
	return start;
}

int main() {
	
	int size = 4;
	int arr[size] = {0, 10, 5, 2};
	
	int index = findPeakIndexInMountainArray(arr, size);
	cout << "The index of peak element is " << index << endl;
	
	return 0;
	
}