class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        int m = list1.size();
        int n = list2.size();
        
        unordered_map<string,int> umap;
        
        for(int i=0;i<m;i++)
        {
            umap[list1[i]] = i;
        }
        
        vector<string> v;
        int mini = INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(umap.count(list2[i])>0)
            {
                if((umap[list2[i]] + i)<mini)
                {
                    v.clear();
                    v.push_back(list2[i]);
                    mini = umap[list2[i]] + i;
                }    
                
                else if((umap[list2[i]] + i)==mini)
                {
                    v.push_back(list2[i]);
                }
            }
        }
        
        return v;
    }

