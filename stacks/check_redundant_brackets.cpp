#include<stack>
#include<bits/stdc++.h>
using namespace std;

bool checkRedundantBrackets(char *input) {
	// Write your code here
    int i=0;
    int k = strlen(input);
    stack<int> s;
    while(i<k)
    {
        //cout<<input[i];
        if(input[i]!=')')
            s.push(input[i]);
        
        else
        {
            int c=0;
            while(s.top()!='(')
            {
                s.pop();
                c++;
            }
            s.pop();
            //cout<<c<<endl;
            if(c==0)
                return true;
        }
        i++;  
    }
    
    return false;
}
