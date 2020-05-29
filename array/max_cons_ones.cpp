class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& A) {
        
        int n = A.size();
        
        bool flag = false;
        
        int c = 0,maxi = 0;
        
        for(int i=0;i<n;i++)
        {
            if(A[i]==1)
            {
                flag = true;
                c++; 
            }
            
            else
            {
                if(maxi<c)
                    maxi = c;
                c = 0;
                flag = false;
            }
        }
        
        if(flag==true)
        {
            if(maxi<c)
                maxi = c;
        }
        
        return maxi;
    }
};