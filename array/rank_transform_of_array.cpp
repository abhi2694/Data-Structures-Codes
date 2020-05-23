class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,vector<int>> x;
        for(int i = 0;i<arr.size();i++){
            x[arr[i]].push_back(i);
        }
        int i = 1;
        for(auto itr:x){
            for(int j = 0;j<itr.second.size();j++){
                arr[itr.second[j]] = i;
            }
            i++;
        }
        return arr;
    }
};