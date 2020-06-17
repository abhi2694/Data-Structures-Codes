class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int c = INT_MAX;
        int d = 0;
        
        for(auto i:prices)
        {
            if(i<c)
                c = i;
            else if(i-c>d)
                d = i - c;
        }
        
        return d;
        
    }
};