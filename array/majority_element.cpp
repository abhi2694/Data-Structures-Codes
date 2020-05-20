class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        int c = 0;
        int maxi = nums[0];
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==maxi)
                c++;
            else
                c--;
            if(c==0)
            {
                maxi = nums[i];
                c++;
            }
        }
        
        return maxi;
    }
};