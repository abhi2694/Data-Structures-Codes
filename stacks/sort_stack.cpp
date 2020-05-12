#include <stack>
using namespace std;
void sortStack(stack<int> &s){
	// Write your code here
    stack<int> t;
    int a = 0;
    t.push(s.top());
    s.pop();
    
    while(s.size()!=0)
    {
        a = s.top();
        s.pop();
        
        int k = 0;
        
        while(!t.empty() && a<t.top())
        {
            s.push(t.top());
            t.pop();
            k++;
        }
        
        t.push(a);
        int j = 0;
        while(j<k)
        {
            t.push(s.top());
            s.pop();
            j++;
        }
    }
    
    while(t.size()!=0)
    {
        s.push(t.top());
        t.pop();
    }
}

