#include<iostream>
using namespace std;

int getMax(int num[], int size) {
	
	int maxi = INT_MIN;
	for(int i=0;i<size;i++) {
		
		maxi = max(maxi, num[i]);
		
//		if(maxi < num[i]) {
//			maxi = num[i];
//		}
		
	}
	
	return maxi;
	
}

int getMin(int num[], int size) {
	
	int mini = INT_MAX;
	for(int i=0;i<size;i++) {
		
		mini = min(mini, num[i]);
		
//		if(mini > num[i]) {
//			mini = num[i];
//		}
		
	}
	
	return mini;
	
}

int main() {
	
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	
	int nums[100];
	cout << "Enter the values for the array: ";
	for(int i=0;i<size;i++) {
		cin >> nums[i];
	}
	
	cout << endl << "The maximum value in the array is: " << getMax(nums, size) << endl;
	cout << "The minimum value in the array is: " << getMin(nums, size) << endl;
	
	return 0;
	
}