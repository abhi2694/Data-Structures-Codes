class Solution {
public:
     vector<int> sieve(int n)             //to claculate the prime numbers less than n.
    {
        vector<int>res;
        vector<bool>prime(n+1,true);           
        for(int i=2 ; i*i<=n ; i++)
        {
            if(prime[i])
            {
                for(int j=i*i ; j<=n ; j+=i) prime[j]=false;
            }
        }
        for(int i=2 ; i<n ; i++) if(prime[i]) res.push_back(i);
        return res;
    }
    
    int countPrimes(int n) {
        vector<int>ans;
        ans=sieve(n);
        return ans.size();
    }
};
