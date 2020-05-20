class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int n = queries.size();
        
        int m = A.size();
        int sum = 0;
        for(int i=0;i<m;i++)
        {
            if(A[i]%2==0)
                sum+=A[i];
        }
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(A[queries[i][1]]%2==0)
                sum-= A[queries[i][1]];
            
            A[queries[i][1]]+=queries[i][0];
            
            if( A[queries[i][1]]%2==0)
                sum+= A[queries[i][1]];
            
            v.push_back(sum);
        }
        
        return v;
    }
};