class Solution {
public:
    bool isOneBitCharacter(vector<int>& nums) {
        
    int i;
    int n = nums.size();
        cout<<n<<endl;
    for(i=0;i<n-1;i++)
    {
        i+=nums[i];
        cout<<i;
    }
        
    if(i==n-1)
    return true;
        
    return false;
}
};