#include<stack>
int* stockSpan(int *price, int size) {
	// Write your code here
   int *S = new int [size];
  
  stack<int> st;
   st.push(0);
 
   S[0] = 1;
  
  for (int i = 1; i <size; i++)
   {
      
      while (!st.empty() && price[st.top()] < price[i])
         st.pop();
    
      S[i] = (st.empty())? (i + 1) : (i - st.top());
 
      st.push(i);
   }
 return S;
}
