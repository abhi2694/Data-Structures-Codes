class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,bool> u1;
        unordered_map<char,int> u2;
        
        for(int i=0;J[i]!='\0';i++)
            u1[J[i]] = true;
        
        for(int i = 0;S[i]!='\0';i++)
        {
            if(u1.count(S[i])>0)
                u2[S[i]]++;
        }
        
        int sum = 0;
        
        for(auto i : u2)
        {
            sum+=i.second;
        }
        
        return sum;
    }
};
