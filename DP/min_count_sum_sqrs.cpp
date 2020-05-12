
#include<bits/stdc++.h>
int minCount(int n){
    
    /*  Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    
    int* dp = new int[n+1];
    
    dp[0] = 0;
    dp[1] = 1;
    //dp[2] = 2;
    
    for(int i=2;i<=n;i++)
    {
        int mini = INT_MAX;
        for(int j=1;j<=(sqrt(i));j++)
        {
            mini = min(dp[i-(j*j)]+1,mini);
            //if(i==n)
            //cout<<mini<<" ";
        }
        dp[i] = mini;
    }
    
    int ans = dp[n];
    delete [] dp;
    return ans;
    
}
