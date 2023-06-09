#include <bits/stdc++.h> 
long getTrappedWater(long *height, int n){
    long left = 0;
    long  right = n-1;
    long maxLeft = 0, maxRight = 0;
    long ans = 0;
    while(left<right) {
        if(height[left]<=height[right]){
            if(maxLeft <= height[left]) maxLeft = height[left];
            else ans += maxLeft-height[left];
            left++;
        }else{
            if(maxRight<=height[right]) maxRight = height[right];
            else ans += maxRight-height[right];
            right--;
        }
    }

    return ans;
}
