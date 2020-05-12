 bool sortByVal(const pair<int, int> &a, const pair<int, int> &b) 
    { 
        return (a.second < b.second); 
    } 
    

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
         map<int,int> m;
        
        int n = candies.size();
        
        for(int i=0;i<n;i++)
            m[candies[i]]++;
        
        vector<pair<int, int>> vec;

        map<int, int> :: iterator it2;
        for (it2=m.begin(); it2!=m.end(); it2++) 
        {
            vec.push_back(make_pair(it2->first, it2->second));
        }
        
        sort(vec.begin(), vec.end(), sortByVal);
        
        int x = vec.size();
        
        int sum = 0;
        
        
        for(int i=0;i<x && sum<(n/2);i++)
        {
            sum++;
            
        }
        
        return sum;
    }
};
