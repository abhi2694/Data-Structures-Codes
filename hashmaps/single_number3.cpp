class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
            umap[nums[i]]++;
        
        int a  = -1;
        int b = -1;
        
        for(auto i : umap)
        {
            if(i.second==1 && a==-1)
                a = i.first;
            else if(i.second == 1)
                b = i.first;
        }
        
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};
