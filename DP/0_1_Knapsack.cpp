
int knapsack(int* wt, int* val, int n, int W){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
  */
	    int i, j;
   int *K = new int[W+1];
    
    for(i=0;i<=W;i++)
        K[i] = 0;
  
   // Build table K[][] in bottom up manner 
   for (i = 0; i <n; i++) 
   { 
       for(j=W;j>=wt[i];j--)
           K[j] = max(K[j] , val[i] + K[j-wt[i]]);
   } 
    
    return K[W];
}

