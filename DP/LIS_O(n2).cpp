using namespace std;

int lis(int arr[], int n) 
{		
    int* output = new int[n];
    
    output[0] = 1;
    
    for(int i=1;i<n;i++)
    {
        int msf = 0;
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i] && output[j]>msf)
                msf = output[j];
        }
        
        output[i] = msf+1;
    }
    
    int maxi = 0;
    for(int i=0;i<n;i++)
    {
        if(output[i]>maxi)
            maxi = output[i];
    }
    
    delete [] output;
    
    return maxi;
}
