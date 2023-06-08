#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n) {
    long long sum  = 0;
    long long maxi = INT_MIN;
    for(int i=0; i<n; i++) {
        sum += arr[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    long long ans = max(maxi, 0LL);

    return ans;
}
