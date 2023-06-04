#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	vector<int> ans;

	for(auto i:arr1){ if(i!=0) ans.push_back(i);}
	for(auto i:arr2){ if(i!=0) ans.push_back(i);}
	// for(auto i:arr2){ i==0 ? continue : ans.push_back(i);}
	
	sort(ans.begin(), ans.end());
	return ans;
}
