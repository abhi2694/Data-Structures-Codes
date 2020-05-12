#include <bits/stdc++.h>
using namespace std;

long long int getCodes(string input,int n,long long int *ans) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Donâ??t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    if(input[0]=='\0')
    {
        //output[0] = "";
        return 1;
    }
    
     if(input[1]!='\0')
    {
        int first = input[0] - '0';
        int second = first*10 + input[1] - 48;
        if(second%10==0 && second !=10 && second!=20)
        {
            ans[n] = 0;
            return 0;
        }
    }
    
    
    if(input[0]=='0')
    {
        ans[n] = 0;
        return 0;
    }
    
    if(ans[n]!=-1)
        return ans[n];
    
    
    int first = input[0] - '0';
    long long int a = getCodes(input.substr(1),n-1,ans);
    long long int b = 0;
    if(input[1]!='\0')
    {
        int second = first*10 + input[1] - 48;
        if(second>=10 && second<=26)
        {
            b = getCodes(input.substr(2),n-2,ans); 
        }
    }
    
    long long int k=0;

    k = (a+b);
    ans[n] = k%1000000007;
    return ans[n];
}


int main()
{
    while(1)
    {
        string s;
        cin>>s;
        if(s[0]=='0')
            break;
        
        int n = s.length();
        
        long long int *ans = new long long int[n+1];
        for(int i=0;i<=n;i++)
            ans[i] = -1;
        
        //string out[50000];
        cout<<getCodes(s,n,ans)%1000000007<<endl;
    }
    return 0;
}

