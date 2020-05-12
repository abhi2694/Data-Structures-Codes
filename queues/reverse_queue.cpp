#include <queue>

void reverseQueue(queue<int> &q) {
	// Write your code here
    if(q.size()==1)
        return ;
    
    int a = q.front();
    q.pop();
    reverseQueue(q);
    q.push(a);
}
