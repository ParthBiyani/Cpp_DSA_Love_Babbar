#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> &arr, int n, int k) {
	
	int start=0, end=n-1;
	int mid = start + (end-start)/2;
	int ans = -1;
	while(start<=end) {
		if(arr[mid] == k) {
			ans = mid;
			end = mid - 1;
		} else if (arr[mid] < k) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
		mid = start + (end-start)/2;
	}
	return ans;
	
}

int lastOcc(vector<int> &arr, int n, int k) {
	
	int start=0, end=n-1;
	int mid = start + (end-start)/2;
	int ans = -1;
	while(start<=end) {
		if(arr[mid] == k) {
			ans = mid;
			start = mid + 1;
		} else if (arr[mid] < k) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
		mid = start + (end-start)/2;
	}
	return ans;
	
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
	
	pair<int, int> p;
	p.first = firstOcc(arr, n, k);
	p.second = lastOcc(arr, n, k);
	return p;
	
}

int main() {
	
	vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};
	int n = arr.size();
	int k = 2;
	pair<int, int> p= firstAndLastPosition(arr, n, k);
	
	cout << p.first << "\t" << p.second;
	
	return 0;
	
}