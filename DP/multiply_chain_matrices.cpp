#include<bits/stdc++.h>
using namespace std;

int helper(int* p,int** dp,int s,int e)
{
    if(s==e || s==e-1)
        return 0;
    
    //int k=s+1;
    
    if(dp[s][e]!=-1)
        return dp[s][e];
    
  	int mini = INT_MAX;  

    for(int k=s+1;k<e;k++)
    {
        int x = helper(p,dp,s,k)+helper(p,dp,k,e) + (p[s]*p[k]*p[e]);
        if(x<mini)
            mini = x;
        //k++;
    }
    dp[s][e] = mini;
    
    return dp[s][e];
}

int mcm(int* p, int n){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
  */
	
	int** dp = new int*[n+1];
    for(int i=0;i<=n;i++)
        dp[i] = new int[n+1];
    
    for(int i = 0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
            dp[i][j] = -1;
    }
    
    return helper(p,dp,0,n);
}

//f(a,s,e) = min(s+1,e-1) [f(a,s,k) + f(a,k,e) + a[s]*a[k]*a[e]]
