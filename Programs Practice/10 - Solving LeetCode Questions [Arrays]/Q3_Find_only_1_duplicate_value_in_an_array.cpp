// My method (slower method))

#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
	
	int ans = 0;
	for(int i=0;i<size;i++) {
		ans=ans+arr[i];
	}
	int sum = ((size-1)/2)*((2*1) + (size-2));
	ans = ans - sum;
	return ans;
	
}

int main() {
	
	int size = 9;
	int arr[size] = {8, 7, 2, 5, 4, 7, 1, 3, 6};
	int duplicate = findDuplicate(arr, size);
	cout << "Duplicate value in the array: " << duplicate;
	
	return 0;
	
}


/*
//Love Babbar Method (Faster method)

#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
	
	int ans = 0;
	for(int i=0;i<size;i++) {
		ans=ans^arr[i];
	}
	for(int i=1;i<size;i++) {
		ans=ans^i;
	}
	return ans;
	
}

int main() {
	
	int size = 9;
	int arr[size] = {8, 7, 2, 5, 4, 7, 1, 3, 6};
	int duplicate = findDuplicate(arr, size);
	cout << "Duplicate value in the array: " << duplicate;
	
	return 0;
	
}
*/