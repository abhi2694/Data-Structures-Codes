class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
         int n = A.size();
        int k=0;
        int i=0;
        while(i<n){
            if(A[i]%2==0){
                while(A[k]%2==0 && k<i)
                    k++;
                if(k<i){
                    swap(A[k],A[i]);
                    k++;
                }
            }
            i++;
        }
        return A;
    }
};
