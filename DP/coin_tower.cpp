string solve(int n, int x, int y)
{
	// Write your code here .
    int *ans = new int[n+1];
    ans[0] = 0;
    ans[1] = 1;
    
    for(int i=2;i<=n;i++)
    {
        ans[i] = ans[i-1]^1;
        if(i-x>=0)
            ans[i] = max(ans[i],ans[i-x]^1);
        if(i-y>=0)
            ans[i] = max(ans[i],ans[i-y]^1);
        //ans[i]++;
    }
    if(ans[n]==0)
        return "Whis";
    else
        return "Beerus";
}
