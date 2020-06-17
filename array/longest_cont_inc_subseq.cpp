class Solution {
public:
    int findLengthOfLCIS(vector<int>& a) {
        int n = a.size();
        
        if(n==0 || n==1)
            return n;
        
        int c = 1;
        int i = 0;
        while(i<n-1)
        {
            if(a[i]<a[i+1])
            {
                int x = 1;
                int j = i+1;
                while(j<n-1 && a[j]<a[j+1])
                {
                    x++;
                    j++;
                }
                x++;
                
                if(x>c)
                    c = x;
                i = j;
            }
            
            else
                i++;
        }
        
        return c;
    }
};