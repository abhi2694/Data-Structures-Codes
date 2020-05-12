class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int> umap;
        
        for(int i=0;s[i]!='\0';i++)
        {
            umap[s[i]]++;
        }
        
        int sum = 0;
        //int c = 0;
        
        int flag = 0;
        
        for(auto i: umap)
        {
            if(i.second%2==0)
            {
                sum+=i.second;
            }        
            
            else if(i.second%2==1)
            {
                if(flag==0)
                {
                    sum+=i.second;
                    flag = 1;
                }
                else
                    sum+=i.second-1;
            }
        }
        
        return sum;
        
    }
};
