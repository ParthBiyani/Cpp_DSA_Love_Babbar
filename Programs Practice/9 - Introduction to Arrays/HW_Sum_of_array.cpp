#include<iostream>
using namespace std;

int sum(int arr[], int size) {
	
	int sum = 0;
	for(int i=0;i<size;i++) {
		sum = sum + arr[i];
	}
	return sum;
	
}

int main() {
	
	int size, nums[100];
	cout << "Enter size of the array: ";
	cin >> size;
	
	cout << endl << "Enter the values for the array: ";
	for(int i=0;i<size;i++) {
		cin >> nums[i];
	}
	
	cout << endl << endl << "The sum of all the elements of the array is " << sum(nums, size) << endl;
	
	return 0;
	
}