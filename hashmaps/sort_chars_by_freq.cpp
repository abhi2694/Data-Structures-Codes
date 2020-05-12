class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        priority_queue<pair<int,char>> q;
        for (char c:s){
            m[c]++;
        }
        for (auto e:m){
            q.push({e.second,e.first});
        }
        string result = "";
        pair<int,char> temp;
        while (!q.empty()){
            temp = q.top(); q.pop();
            result += string(temp.first, temp.second);
        }
        return result;
    }
};
