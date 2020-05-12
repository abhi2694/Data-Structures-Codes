#define MOD 100001
#include <unordered_map>
using namespace std;
int numofAP(int *arr, int n){
    /*
    Return all possible AP subsequences formed from the given integer array. You donot need to take input or print anything.
    Just return the ans.
    */
    int ans=n+1;
    unordered_map<int,int>* map=new unordered_map<int,int>[n];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int diff=arr[j]-arr[i];
            map[i][diff]+=1;
            ans=(ans+1)%MOD;
        }
    }
    for(int i=n-3;i>=0;i--){
        for(int j=i+1;j<n;j++){
            int diff=arr[j]-arr[i];
            map[i][diff]=((map[i][diff]%MOD)+(map[j][diff]%MOD))%MOD;
            ans=(ans%MOD+(map[j][diff]%MOD))%MOD;
        }
    }
    delete[] map;
    return ans;
}
