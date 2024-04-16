#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
	
	for(int i=0;i<size;i++) {
		if(arr[i] == key) {
			return i;
		}
	}
	return -1;
	
}

//bool linearSearch(int arr[], int size, int key) {
//	
//	for(int i=0;i<size;i++) {
//		if(arr[i] == key) {
//			return 1;
//		}
//	}
//	return 0;
//	
//}

int main() {
	
	int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
	
	cout << "Enter the element you want to find in the array: ";
	int key;
	cin >> key;
	
	int size = 10;
	int index = linearSearch(arr, size, key);
	if(index > -1) {
		cout << endl << endl << key << " is present on the " << index << " index in the array";
	} else {
		cout << endl << endl << key << " is not present in the array";
	}
	
//	if(linearSearch(arr, size, key)) {
//		cout << endl << endl << key << " is present in the array";
//	} else {
//		cout << endl << endl << key << " is not present in the array";
//	}
	
	return 0;
	
}