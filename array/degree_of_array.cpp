class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,vector<int>> umap;
        
        for(int i=0;i<n;i++)
        {
            if(umap.count(nums[i])>0)
            {
                umap[nums[i]][0]++;
                umap[nums[i]][2] = i;
            }
            else
            {
                vector<int> v;
                v.push_back(1);
                v.push_back(i);
                v.push_back(i);
                umap[nums[i]] = v;
            }
        }
        
        int c = 0,mf = 0;
        
        for(auto i: umap)
        {
            if(i.second[0]>mf)
            {
                mf = i.second[0];
                c = i.second[2]-i.second[1]+1;
            }
            else if(i.second[0]==mf)
            {
                if((i.second[2]-i.second[1]+1)<c)
                    c = i.second[2]-i.second[1]+1;
            }
        }
        
        return c;
    }
};