class Solution {
public:
    int maxProfit(vector<int>& A) {
        int n = A.size();
        
        bool flag = false;
        int b = 0;
        int tot = 0;
        for(int i = 0;i<n-1;i++)
        {
            if(flag==false)
            {
                if(A[i]>=A[i+1])
                    continue;
                else
                {
                    flag = true;
                    b = A[i];
                }
            }
            
            else
            {
               if(A[i]<=A[i+1])
                   continue;
                else
                {
                    flag = false;
                    tot+=(A[i]-b);
                    b = 0;
                }
            }
        }
        
        if(flag==true)
        {
            if(A[n-1]>b)
                tot+=A[n-1]-b;
        }
        
        return tot;
    }
};