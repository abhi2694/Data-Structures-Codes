#include<bits/stdc++.h>
using namespace std;

int getMin(int *arr, int n){
   /* Don't write main().
      Don't read input, it is passed as function argument.
      Return output and don't print it.
      Taking input and printing output is handled automatically.
   */
    
    int* ans = new int[n];
    ans[0] = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        	ans[i] = ans[i-1]+1;
        else
            ans[i] = 1;
    }
    
    ans[n-1] = max(ans[n-1],1);
    
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1])
        	ans[i] = max(ans[i+1]+1,ans[i]);
        else
            ans[i] = max(ans[i],1);
    }
	int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=ans[i];
    }
    return sum;
}

