#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int helper(string s1,string s2, int** dp,int m,int n)
{
    if(m==0 && n==0)
        return 0;
    if(m==0)
        return n;
    if(n==0)
        return m;
    
    if(dp[m][n]!=-1)
        return dp[m][n];
    
    int a = INT_MAX,b = INT_MAX,c = INT_MAX;
    
    if(s1[0]==s2[0])
    {
        dp[m][n] =  helper(s1.substr(1),s2.substr(1),dp,m-1,n-1);
        return dp[m][n];
    }
    else
    {
        a = 1 + helper(s1,s2.substr(1),dp,m,n-1);
        b = 1 + helper(s1.substr(1),s2,dp,m-1,n);
        c = 1 + helper(s1.substr(1),s2.substr(1),dp,m-1,n-1);
        dp[m][n] =  min(a,min(b,c));
        return dp[m][n];
    }
}


int editDistance(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
    int m = s1.length();
    int n = s2.length();
	int** dp = new int*[m+1];
    for(int i=0;i<=m;i++)
        dp[i] = new int[n+1];
    
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
            dp[i][j] = -1;
    }
    
    return helper(s1,s2,dp,m,n);

}

