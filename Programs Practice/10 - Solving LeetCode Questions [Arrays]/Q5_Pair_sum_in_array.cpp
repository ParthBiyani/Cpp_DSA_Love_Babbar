#include<iostream>
#include<vector>
using namespace std;

void pairSum(int arr[], int size, int s) {
	
	vector<vector<int>> ans;
	
	for(int i=0;i<size;i++) {
		for(int j=i+1;j<size;j++) {
			
			if(arr[i] + arr[j] == s) {
				vector<int> temp;
				temp.push_back(min(arr[i], arr[j]));
				temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);
			}
			
		}
	}
//	qsort(ans.begin(), ans.end());
	
	for(int i=0;i<ans.size();i++) {
		cout << "{ ";
		for(int j=0;j<2;j++) {
			cout << ans[i][j] << " ";
		}
		cout << "}" << endl;
	}
	
}

int main() {
	
	int size = 5;
	int arr[size] = {1, 2, 3, 4, 5};
	int s = 5;
	
	pairSum(arr, size, s);
	
	return 0;
	
}