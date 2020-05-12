#include <vector>
#include<unordered_map>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *input, int n){
	//Your Code goes here
    unordered_map<int,bool> umap;
    
    for(int i=0;i<n;i++)
    {
        umap[input[i]] = true;
    }
    
    int maxi = 0;
    int maxe = -1;
    
    for(int i=0;i<n;i++)
    {
        if(umap.count(input[i]-1)==0)
        {
            int c = 1;
            int j = input[i]+1;
            while(umap.count(j)>0)
            {
                j++;
                c++;
            }
            if(c>maxi)
            {
                maxi = c;
                maxe = input[i];
            }
        }
	}
    
    vector<int> v;
    
    for(int i=maxe;i<(maxe+maxi);i++)
    {
        v.push_back(i);
	}
    return v;
}
