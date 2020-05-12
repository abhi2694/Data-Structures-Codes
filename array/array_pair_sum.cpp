class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> v(20001,0);
        
        for(int i=0;i<n;i++)
        {
            v[nums[i]+10000]++;
        }
        
        bool flag = true;
        int sum = 0;
        
        for(int i=0;i<(20001);i++)
        {
            if(v[i]>0)
            {
                while(v[i]>0)
                {
                    if(flag)
                    sum+=i-10000;
                
                    flag = !flag;
                    v[i]--;
                }
                
            }
        }
        
        return sum;
    }
};
