class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            int a = 0;
            while(nums[i]>0)
            {
                //nums[i]%=10;
                nums[i]/=10;
                a++;
            }
            
            if((a%2)==0)
                c++;
        }
        
        return c;
    }
};
