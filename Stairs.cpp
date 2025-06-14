int Solution::climbStairs(int n) {
    int dp[n];
    if(n==0) return 1;
    dp[0]=1;
    dp[1]=2;
    for(int i=2;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n-1];
}
