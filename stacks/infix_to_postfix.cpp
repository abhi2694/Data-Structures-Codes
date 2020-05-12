#include<stack>
#include<string>
#include<math.h>

int prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}

void evaluatePostfix(char e[]) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the required output.
     * Taking input is handled automatically.
     */
  string ans="";
  stack<char> s;
  
  for(int x=0;e[x]!='\0';x++)
  {
   	if(e[x]>='0' && e[x]<='9')
    {
      ans+=e[x];
    }
    if(e[x]=='+' || e[x]=='-' || e[x]=='*' || e[x]=='/' || e[x]=='^')
    {
     	if(s.empty()==1)
          s.push(e[x]);
      	else
      	if(prec(e[x]) > prec(s.top()) )
           s.push(e[x]);
        else
        {
 	  		while(s.empty()!=1 && (prec(e[x]) <= prec(s.top()) ) )
    	    {
    		    ans+=s.top();
            	s.pop();
          	}
            s.push(e[x]);
        }
      
    }
    
    if(e[x]=='(')
      s.push(e[x]);
    if(e[x]==')')
    {
      while(s.top()!='(')
      {
      	ans+=s.top();
        s.pop();
      }
      s.pop();
    }
  }
  while(s.empty()!=1)
  {
    ans+=s.top();
    s.pop();
  }
  cout<<ans<<endl;
  
  
  stack<int> s2;
  for(int x=0;ans[x]!='\0';x++)
  {
    if(ans[x]>='0' && ans[x]<='9')
    {
      
      s2.push(ans[x]-'0');
    }
	if(ans[x]=='+') 
    {
      int t1=s2.top();
      s2.pop();
      int t2=s2.top();
      s2.pop();
      s2.push(t2+t1);
    }
    if(ans[x]=='-')
    {
      int t1=s2.top();
      s2.pop();
      int t2=s2.top();
      s2.pop();
      s2.push(t2-t1);
    }
    if(ans[x]=='*') 
    {
      int t1=s2.top();
      s2.pop();
      int t2=s2.top();
      s2.pop();
      s2.push(t2*t1);
    }
    if(ans[x]=='/') 
    {
      int t1=s2.top();
      s2.pop();
      int t2=s2.top();
      s2.pop();
      s2.push(t2/t1);
    }
    if(ans[x]=='^') 
    {
      int t1=s2.top();
      s2.pop();
      int t2=s2.top();
      s2.pop();
      s2.push(pow(t2,t1));
    }
    
  }
  cout<<s2.top();
}
