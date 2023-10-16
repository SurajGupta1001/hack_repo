#include <bits/stdc++.h> 
int mod=1e9+7;
int f(int i, int nStairs,vector<int>&dp)
{
    if(i > nStairs) return 0;
    if(i == nStairs) return 1;

    if(dp[i] != -1) return dp[i];
    int one = f(i+1,nStairs,dp);
    int two = f(i+2,nStairs,dp);
    return dp[i] = (one + two)%mod;
}
int countDistinctWays(int nStairs) {
    vector<int>dp(nStairs + 1,-1);
    return f(0,nStairs,dp)%mod;
}
