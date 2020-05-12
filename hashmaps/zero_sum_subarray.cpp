#include<unordered_map>
bool subArrayZeroSum(int input[], int n) {
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically. Return only true or false.
     	*/
    unordered_map<int,bool> umap;
    
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=input[i];
        if(umap.count(sum)>0)
            return true;
        umap[sum] = true;
        
    }
    
    return false;
     	
}


