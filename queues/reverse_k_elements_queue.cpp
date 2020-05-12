#include <cmath>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

queue<int> reverseKElements(queue<int> input, int k) {
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    stack<int> s;
    queue<int> q;
    
    for(int i=0;i<k;i++)
    {
        int temp = input.front();
        input.pop();
        s.push(temp);
    }
    while(!input.empty())
    {
        q.push(input.front());
        input.pop();
    }
    for(int i=0;i<k;i++)
    {
        input.push(s.top());
        s.pop();
    }
    while(!q.empty())
    {
         input.push(q.front());
         q.pop();
    }
    
    return input;
}

