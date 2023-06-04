#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
         vector<long long int> row;
         row.push_back(1);
         ans.push_back(row);
         row.clear();
        for(int i=0; i<n-1; i++) {
            row.push_back(1);
            for(int j=0; j<i; j++) {
               row.push_back(ans[i][j] + ans[i][j+1]);
            }
            row.push_back(1);
            ans.push_back(row);
            row.clear();
        }

        return ans;
}
