class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        //set<int> s;
        int n = arr.size();
        int maxi = 0;
        vector<int> v(n,0);
        
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
           {
                v[i] = -1;
                //s.insert(arr[i]);
                maxi = arr[i];
            }
            
            else
            {
                v[i] = maxi;
                if(arr[i]>maxi)
                    maxi = arr[i];
            }
        }

        
        return v;
    }
};
