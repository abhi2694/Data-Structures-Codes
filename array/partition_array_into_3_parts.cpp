class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& a1) {
      bool mm=false;

    int sum=0;
    for(int i=0;i<a1.size();i++){
        sum+=a1[i];
    }
    if(sum%3!=0){
        return mm;
    }
    sum/=3;
    int sum1=0;
    int count=3;
    for(auto k:a1){
        sum1+=k;
        if(sum==sum1){
            count--;
            sum1=0;
        }
    }
  return count<=0;
    }
};