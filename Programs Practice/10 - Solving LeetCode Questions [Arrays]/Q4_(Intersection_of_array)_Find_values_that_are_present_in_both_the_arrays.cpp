// Both the input arrays are sorted in ascending order

#include<iostream>
#include<vector>
using namespace std;

int main() {
	
	// Inputs
	int n = 3, m = 2;
	int arr1[n] = {1, 2, 3}, arr2[m] = {4, 5};
	
	// Our code
	int i=0, j=0;
	vector<int> ans;
	
	while(i<n && j<m) {
		
		if(arr1[i] == arr2[j]) {
			ans.push_back(arr1[i]);
			i++;
			j++;
		} else if (arr1[i] < arr2[j]) {
			i++;
		} else {
			j++;
		}
		
	}
	
	if(ans.size() == 0) {
		ans.push_back(-1);
	}
	
	for(int i=0;i<ans.size();i++) {
		cout << ans[i] << " ";
	}
	
	return 0;
	
}