class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        
        int m = arr1.size(); 
        int n = arr2.size();
        
        int i=0,j=0;
        
        int c = 0;
        
        while(i<m && j<n)
        {
            if(abs(arr1[i]-arr2[j])<=d)
            {
                c++;
                i++;  
            }
            else
            {
                if(arr1[i]<=arr2[j])
                i++;
            else
                j++;
            }         
        }
        
        return (m-c);
    }
};
