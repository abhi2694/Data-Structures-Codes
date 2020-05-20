class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int a = 0;
       for(int i = 0;i<(n-(n/4));i++)
       {
           if(arr[i] == arr[i+(n/4)])
               a = arr[i];
       }
        
        return a;
    }
};