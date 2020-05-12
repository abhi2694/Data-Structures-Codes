class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int n = A.size();
        
        int i = 0,j = n-1;
        if(n%2!=0)
            j--;
        
        while(i<n && j>0)
        {
            while(i<n && A[i]%2==0)
                i+=2;
            
            while(j>0 && A[j]%2!=0)
                j-=2;
            
            if(i<n && j>0)
            {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp; 
            }
            
        }
        
        return A;
    }
};
