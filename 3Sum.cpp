#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	sort(arr.begin(), arr.end());
	vector<vector<int>> ans;
	for(int i=0; i<n; i++) {
		if(i>0 and arr[i] == arr[i-1]) continue;

		int j = i+1;
		int k = n-1;

		while(j<k) {
			int sum = arr[i] + arr[j] + arr[k];

			if(sum > K) {
				k--;
			} else if(sum < K) {
				j++;
			} else {
				vector<int> t = {arr[i], arr[j], arr[k]};
				ans.push_back(t);
				k--;
				j++;

				while(j<k and arr[j] == arr[j-1]) j++;
				while(j<k and arr[k] == arr[k+1]) k--;
			}
		}
	}
	return ans;
}
