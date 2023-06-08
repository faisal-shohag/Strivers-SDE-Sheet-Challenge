#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int profit = 0;
    int cost = INT_MAX;

    for(int i=0; i<prices.size(); i++) {
            cost = min(cost, prices[i]);
            profit = max(profit, prices[i]-cost);
    
    }

    return profit;
}
