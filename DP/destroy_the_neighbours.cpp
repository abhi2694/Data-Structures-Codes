
int solve(int n,vector<int>A){
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    int* dp = new int[1001];
    
    dp[0] = 0;
	int* freq = new int[1001];
    
    //freq = {0};
    
    for(int i=0;i<=1000;i++)
        freq[i] = 0;
    
    for(int i=0;i<n;i++)
    {
        freq[A[i]]++;
    } 
    
    //dp[1] = 1;
    dp[1] = freq[1];
    
    for(int i=2;i<=1000;i++)
    {
        dp[i] = max(dp[i-2]+(i*freq[i]),dp[i-1]);
	}

    int ans = dp[1000];
    delete [] dp;
    return ans;
}
