#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	sort(arr.begin(), arr.end());
	int ans;
	for(int i=1; i<arr.size(); i++) {
		if(arr[i] == arr[i-1]){
			ans = arr[i];
			break;
		}
	}

	return ans;
}
