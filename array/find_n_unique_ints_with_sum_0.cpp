class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v(n,0);
        
        if((n%2)!=0)
        {
            v[n/2] = 0;
            int x = 0,y=0,i=(n/2),j=(n/2);
            
            while(i>0 && j<n-1)
            {
                i--;
                j++;
                x--;
                y++;
                v[i] = x;
                v[j] = y;
            }
        }
        
        else
        {
            v[n/2] = 1;
            v[(n/2)-1] = -1;
            int x=-1,y=1,i=(n/2)-1,j=(n/2);
            
            while(i>0 && j<n-1)
            {
                i--;
                j++;
                x--;
                y++;
                v[i] = x;
                v[j] = y;
            }
        }
        
        return v;
    }
};
