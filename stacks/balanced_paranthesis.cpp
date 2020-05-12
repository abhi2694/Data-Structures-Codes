#include<stack>
using namespace std;

bool checkBalanced(char *exp) {
	// Write your code here
    int i=0;
    stack<char> s;
    
    while(exp[i]!='\0')
    {
        if(exp[i]=='{' || exp[i]=='(' || exp[i]=='[')
            s.push(exp[i]);
        
        else if(exp[i]=='}' || exp[i]==')' || exp[i]==']')
        {
            if(s.size()==0)
                return false;
            else
            {
                char a = s.top();
                if(a=='{' && exp[i]=='}')
                    s.pop();
                else if(a=='(' && exp[i]==')')
                    s.pop();
                else if(a=='[' && exp[i]==']')
                    s.pop();
                else
                    return false;
            }   
        }
        i++;
    }
    if(s.size()==0)
        return true;
    else
        return false;
}
