#include<unordered_map>
int max(int input[], int n) {
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    unordered_map<int,int> umap;
    
    int sum = 0;
    int maxi = 0;
    
    for(int i=0;i<n;i++)
    {
        if(input[i]==1)
            sum++;
        else
            sum--;
        
        if(umap.count(sum)>0)
        {
            if(maxi<(i-umap[sum]))
                maxi = i - umap[sum];
		}
        else
            umap[sum] = i;
	}
    
    return maxi;

}

