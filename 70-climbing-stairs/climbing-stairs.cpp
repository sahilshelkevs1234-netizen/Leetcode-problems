class Solution {
public:
int hold(int n,vector<int>& dp){
    if(n ==1 || n==2){
        return n;

    }
    if(dp[n]!=-1){
        return dp[n];
    }
     return dp[n]=hold(n-1,dp)+hold(n-2,dp);
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return hold(n,dp);
    }
};