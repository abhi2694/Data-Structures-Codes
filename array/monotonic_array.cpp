class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        int n = A.size();
        
        if(n==1)
            return true;
        
        int flag = 0;
        if(A[0]>A[1])
            flag = 2;
        else if(A[0]<A[1])
            flag = 1;
           
        for(int i = 1;i<n-1;i++)
        {
            if(flag==1)
            {
                if(A[i]>A[i+1])
                    return false;
            }
            
            else if(flag==2)
            {
                if(A[i]<A[i+1])
                    return false;
            }
            
            else if(flag==0)
            {
                if(A[i]>A[i+1])
                    flag = 2;
                
                else if(A[i]<A[i+1])
                    flag = 1;
            }
        }
        
        return true;
    }
};