int findSum(int arr[],int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Don't print output and return the output.
     * Taking input and printing output is handled automatically.
     */
    int msf = arr[0];
    int meh = 0;
    
    for(int i=0;i<n;i++)
    {
        meh+=arr[i];
        if(msf<meh)
            msf = meh;
        if(meh<0)
            meh = 0;
    }
	return msf;
}
 
    

