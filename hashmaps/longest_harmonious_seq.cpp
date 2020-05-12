class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> m;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        int a = INT_MIN;
        int b = INT_MIN;
        
        int maxi = 0;
        
        for(auto i:m)
        {
            if(a==INT_MIN)
            {
                a = i.first;
                b = i.second;
            }
            
            else
            {
                if((i.first-a)==1)
                {
                    int x = i.second + b;
                    if(x>maxi)
                        maxi = x;
                    a = i.first;
                    b = i.second;
                }
                else
                {
                    a = i.first;
                    b = i.second;
                }
            }
        }
        
        return maxi;
    }
};
