class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        unordered_map<int,int> umap;
        
        vector<int> v;
        
        for(int i=0;i<m;i++)
            umap[nums1[i]]++;
        
        for(int i=0;i<n;i++)
        {
            if(umap.count(nums2[i])>0)
            {
                v.push_back(nums2[i]);
                //s.erase(nums2[i]);
                umap[nums2[i]]--;
                if(umap[nums2[i]]==0)
                    umap.erase(nums2[i]);
            }
        }
        
        return v;
    }
};
