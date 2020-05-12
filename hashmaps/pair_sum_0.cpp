 	#include<unordered_map>
	void PairSum(int *input, int n) {	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Don't need to return anything. Print the desired pairs in the function itself.
     	*/
     	unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
           umap[input[i]]++;   
        }
        for(int i=0;i<n;i++){
            if(input[i]>0){
                if(umap.count(-input[i])>0){
                    int n1=umap[-input[i]];
                    int n2=umap[input[i]];
                    for(int j=0;j<n1*n2;j++){
                        cout<<-input[i]<<" "<<input[i]<<endl;
                    }
                    umap.erase(input[i]);
                    umap.erase(-input[i]);
                    
                }
            }
        }
     	
     	
 	}


