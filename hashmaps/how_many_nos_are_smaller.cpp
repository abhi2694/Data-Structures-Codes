class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> m;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            //if(s.count(nums[i])==0)
                m[nums[i]]++;
        }
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            int sum = 0;
           for(auto j : m)
           {
               if(j.first == nums[i])
                   break;
               else
                   sum+=j.second;
            }
            v.push_back(sum);
            
        }
        return v;
        //distance(s.find(nums[i]),s.begin())
    }
};
