#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int> &arr, int size) {
	
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

int binarySearch(vector<int> &arr, int s, int e, int key) {
	
	int start = s;
	int end = e;
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
	
	int size = 5;
	vector<int> arr = {7, 9, 10, 1, 2};
	int k = 7;
	int pivot = getPivot(arr, size);
	
	if(k >= arr[pivot] && k <= arr[size-1]) {
		cout << k << " is present on " << binarySearch(arr, pivot, size-1, k) << " index.";
	} else {
		cout << k << " is present on " << binarySearch(arr, 0, pivot-1, k) << " index.";
	}
	
	return 0;
	
}

