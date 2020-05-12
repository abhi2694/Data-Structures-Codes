#include <cmath>
#include <iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int minDistance(int arr[],int n){
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    unordered_map<int,int> umap;
    
    int mini = INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(umap.count(arr[i])>0)
        {
            if(mini>(i - umap[arr[i]]))
                mini = i - umap[arr[i]];
        }
            umap[arr[i]] = i;
    }
    return mini;
}

