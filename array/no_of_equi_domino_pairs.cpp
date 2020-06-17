class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        map<int,int> m;
        
        int count  = 0;
        
        for(auto i:d)
            count+=m[min(i[0],i[1])*10 + max(i[0],i[1])]++;
        
        return count;
    }
};