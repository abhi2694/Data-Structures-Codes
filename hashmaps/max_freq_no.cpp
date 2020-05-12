 #include<unordered_map>	
	int highestFrequency(int *input, int n){	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
     	
     	unordered_map<int,int> umap;
        
        for(int i = 0;i<n;i++)
            umap[input[i]]++;
        
        int maxi = 0;
        int maxe = 0;
        for(int i = 0;i<n;i++)
        {
            if(umap[input[i]]>maxi)
                {
                maxi = umap[input[i]];
                maxe = input[i];
            }
        }
        return maxe;
     	
 	}


