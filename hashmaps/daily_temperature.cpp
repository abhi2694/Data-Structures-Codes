class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> ret(n, 0);
        stack<int> indices;
        for(int i = 0 ; i < n ; i ++){
            while(!indices.empty()){
                int index = indices.top();
                if(T[index] < T[i]){
                    ret[index] = i - index;
                    indices.pop();
                }
                else
                    break;
            }
            indices.push(i);
        }
        return ret;
    }
};
