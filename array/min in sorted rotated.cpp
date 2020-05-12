#include <iostream>
using namespace std;

int checkpos(int *A, int N, int low,int high)
{
    if(N==0)
    return 0;
    
    int mid = ((low+high)/2);
    if(A[mid]<A[mid-1] && A[mid]<A[mid+1])
	return mid;
	
	int k = mid - low;
	int l = high - mid;
	
	int x = checkpos(A,k,low,mid-1);
	int y = checkpos(A,l,mid+1,high);
	
	if(x!=0)
	return x;
	else
	return y;
}

int main() {
	//code
	int T,N,i;
	cin>>T;
	while(T--){
	 cin>>N;
	 int *A = new int[N];
	 for(i=0;i<N;i++)
	 cin>>A[i];
	 
	 int x = checkpos(A,N,0,N-1);
	 cout<<A[x]<<endl;
	 
	 delete [] A;
	}
	return 0;
}
