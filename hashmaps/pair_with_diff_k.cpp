#include<unordered_map>
void printPairs(int *input, int n, int k) {
	// Write your code here
	unordered_map<int,int> umap;
    
    for(int i =0;i<n;i++)
        umap[input[i]]++;
    
    for(int i=0;i<n;i++)
    {
        if(umap.count(input[i]-k)>0)
        {
            int x = umap[input[i]];
            int y = umap[input[i]-k];
            int z = umap[input[i]+k];
            
            if(k==0)
            {
                for(int j = 0;j<((x*(x-1))/2);j++)
                    cout<<input[i]-k<<" "<<input[i]<<endl;
            }
            else
                {
                for(int j = 0;j<(x*y);j++)
                    cout<<input[i]-k<<" "<<input[i]<<endl;
                
                 for(int j = 0;j<(x*z);j++)
                    cout<<input[i]<<" "<<input[i]+k<<endl;
            
            }
            
            umap.erase(input[i]);
            //umap.erase(input[i]-k);
        }
    }
}



