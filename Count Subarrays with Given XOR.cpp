#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    map<int, int> mp;
    int cnt = 0;
    int xr = 0;
    mp[xr]++;

    for(int i=0; i<arr.size(); i++) {
        xr = xr^arr[i];
        int e = xr^x;
        cnt += mp[e];

        mp[xr]++;
    }

    return cnt;
}
