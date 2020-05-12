#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T,N,i,j,k;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    
	    int A[N];
	    
	    for(i=0;i<N;i++)
	    cin>>A[i];
	    
	    sort(A,A+N);
	    
	    
	    k=0;
	    
	    if((N%2)!=0)
	    i = (N/2);
	    
	    else
	    i = ((N-1)/2);
	    
	    
	    j = i+1;
	    
	    int B[N];
	    
	    while(k<N)
	    {
	        if((k%2)==0)
	        {
	            B[i] = A[k];
	            i--;
	        }
	        
	        else
	        {
	            B[j] = A[k];
	            j++;
	        }
	        
	        k++;
	    }
	    
	   for(i=0;i<N;i++)
	    cout<<B[i]<<" ";
	    
	   cout<<endl;
	   
	   
	    
	}
	return 0;
}
