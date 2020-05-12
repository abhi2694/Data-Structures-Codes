class Solution {
public:
    
    int helper(int n, int *arr)
    {
        if(n==0 || n==1)
            return n;
        
        if(arr[n]!=-1)
            return arr[n];
        
        arr[n] = helper(n-1,arr) + helper(n-2,arr);
        return arr[n];
    }
    
    int fib(int n) {
        
       int *arr = new int[n+1];
        for(int i=0;i<=n;i++)
            arr[i] = -1;
        return helper(n,arr);
    }
};