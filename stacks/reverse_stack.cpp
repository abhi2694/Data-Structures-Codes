#include<stack>

void reverseStack(stack<int> &input, stack<int> &extra) {
	// Write your code here
    int i=0;
    extra.push(input.top());
    input.pop();
    i++;
    while(input.size()!=0)
    {
    int a = input.top();
    input.pop();
    int j=0;
    while(j<i)
    {
        input.push(extra.top());
        extra.pop();
        j++;
    }
    extra.push(a);
    j = 0;
    while(j<i)
    {
        extra.push(input.top());
        input.pop();
        j++;
    }  
        i++;
    }
    
    while(extra.size()!=0)
    {
        input.push(extra.top());
        extra.pop();
    }
}
