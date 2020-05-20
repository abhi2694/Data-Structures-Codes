class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
     vector<vector<int> > vec( n , vector<int> (n, 0));
        
    int k = indices.size();
    unordered_map<int,int> rows,cols;
        
    for(int i = 0;i<k;i++)
    {
       rows[indices[i][0]]++;
       cols[indices[i][1]]++;
    }
    
    int ro = 0;
        
    for(auto i:rows)
    {
        i.second%=2;
        if(i.second!=0)
            ro++;
    }
    int co = 0;  
    for(auto j:cols)
    {
        j.second%=2;
        if(j.second!=0)
            co++;
    }
        
    return (ro*m)-(ro*co) + (co*(n-ro));
    }
};