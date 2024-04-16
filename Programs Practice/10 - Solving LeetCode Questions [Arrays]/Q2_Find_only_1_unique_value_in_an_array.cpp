#include<iostream>
using namespace std;

int findUnique(int arr[], int size) {
	
	int ans = 0;
	for(int i=0;i<size;i++) {
		ans = ans ^ arr[i];
	}
	return ans;
	
}

int main() {
	
	int arr[7] = {1, 5, 3, 9, 5, 3, 9};
	
	int size = 7;
	int unique = findUnique(arr, size);
	cout << "The unique value in the array is: " << unique;
	
	return 0;
	
}