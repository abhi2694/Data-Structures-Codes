class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        unordered_map<char,int> se,gue;
        int ans=0,bulls=0;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
            se[secret[i]]++;
            gue[guess[i]]++;
        }
        for(auto it=gue.begin();it!=gue.end();it++){
                char k=it->first;
                if(se.find(k)!=se.end()){
                    ans+=min(se[k],it->second); 
                }
        }
        return to_string(bulls)+"A"+to_string(ans-bulls)+"B";
    }
};
