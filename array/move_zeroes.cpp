class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        int n = nums.size();
        
        for(int i = 0;i<n;i++)
        {
            if(nums[i]==0)
                c++;
            else
            {
                nums[i-c] = nums[i];
            }
        }
        
        for(int i = n-1,x = 0;x<c;x++,i--)
            nums[i] = 0;
    }
};