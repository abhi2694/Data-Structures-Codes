class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        
        int i =0,j= n-1;
        
        while(i<j)
        {
            if((numbers[i]+numbers[j])==target)
            {
                vector<int> a;
                a.push_back(i+1);
                a.push_back(j+1);
                return a;
            }
            
            else if((numbers[i]+numbers[j])>target)
                j--;
            
            else if((numbers[i]+numbers[j])<target)
                i++;
        }
        
        vector<int> a;
        return a;
    }
};