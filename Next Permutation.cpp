#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    int index = -1;
 
    for(int i=n-2; i>=0; i--) {
        if(p[i]<p[i+1]) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        reverse(p.begin(), p.end());
        return p;
    }

    for(int i=n-1; i>index; i--) {
        if(p[index] < p[i]) {
            swap(p[index], p[i]);
            break;
        }
    }
    reverse(p.begin()+index+1, p.end());
    return p;
}
