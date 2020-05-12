#include <iostream>
using namespace std;

int checkpos(int *A, int N, int low,int high)
{
    if(N==0)
    return 0;
    
    int mid = ((low+high)/2);
    if(A[mid]>A[mid-1] && A[mid]>A[mid+1])
	return mid;
	
	int k = mid - low;
	int l = high - mid;
	
	checkpos(A,k,low,mid-1);
	checkpos(A,l,mid+1,high);
}

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 

int main() {
	//code
	
	int T,N,i,K;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    
	    int *A = new int[N];
	    
	    for(i=0;i<N;i++)
	    cin>>A[i];
	    
	    cin>>K;
	    
	    int M = checkpos(A,N,0,N-1);
	    
	    cout<<M<<" ";
	    
	    int b = binarySearch(A, 0, M, K); 
	    int c = binarySearch(A, M+1, N-1, K); 
	    
	    if(b!=-1)
	    cout<<b<<endl;
	    else if(c!=-1)
	    cout<<c<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
