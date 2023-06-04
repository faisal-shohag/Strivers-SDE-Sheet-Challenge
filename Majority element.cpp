#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	int cnt = 0;
	int el;
	for(int i=0; i<n; i++) {
		if(cnt==0) {
			cnt = 1;
			el = arr[i];
		} else if(el == arr[i]) {
			cnt++;
		} else {
			cnt--;
		}
	}
	
	int c = 0;
	for(int i=0; i<n; i++) {
		if(el == arr[i]) c++;
	}

	return c > n/2 ? el : -1;
}
