class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int c = 0;
        int n = candies.size();
        
        for(int i=0;i<n;i++)
        {
            if(candies[i]>c)
                c = candies[i];
        }
        
        vector<bool> v;
        
        for(int i=0;i<n;i++)
        {
            if((candies[i]+extraCandies)>=c)
                v.push_back(true);
            else
                v.push_back(false);
        }
        
        return v;
    }
};
