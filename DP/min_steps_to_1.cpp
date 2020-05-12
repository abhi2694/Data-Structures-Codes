#include<bits/stdc++.h>

int countStepsTo1(int n){

    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     */
    int *arr = new int[n+1];
    
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    
    for(int i=4;i<=n;i++)
    {
        int a = arr[i-1];
        int b = INT_MAX;
        int c = INT_MAX;
        
        if((i%2)==0)
            b = arr[i/2];
        
        if((i%3)==0)
            c = arr[i/3];
        arr[i] = min(a,min(b,c))+1;
    }
    
    int output = arr[n];
    delete [] arr;
    return output;

}

