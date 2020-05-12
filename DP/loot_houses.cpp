#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int getMaxMoney(int arr[], int n){

	/*Write your code here.
	 *Don’t write main(). 
	 *Don’t take input, it is passed as function argument.
	 *Don’t print output.
	 *Taking input and printing output is handled automatically.
         */ 
	int *output = new int[n];
    output[0] = arr[0];
    output[1] = max(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        output[i] = max(output[i-1],output[i-2]+arr[i]);
	}
    int ans = output[n-1];
    delete [] output;
    return ans;
}

