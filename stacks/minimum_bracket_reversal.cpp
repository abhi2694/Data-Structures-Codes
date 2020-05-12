#include<stack>
#include<bits/stdc++.h>
using namespace std;
int countBracketReversals(char input[]){
	// Write your code here
    int i=0;
    int cn = 0;
    stack<char> s;
    
    while(input[i]!='\0')
    {
        if(input[i]=='{')
        {
            if(cn==0)
                s.push(input[i]);
            else
                cn++;
        }
        
        else if(input[i]=='}')
        {
            if(s.size()!=0)
                s.pop();
            else
                cn++;
        }
        i++;
    }
    
    //cout<<abs(-3)<<endl;
    
    int a = s.size()-cn;
    if(a<0)
        a*=-1;
    //cout<<s.size()<<" "<<a<<cn<<" "<<endl;
    if((a%2)!=0)
        return -1;
    else 
        return a/2;
        
}

