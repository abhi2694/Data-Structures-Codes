// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array
#include<unordered_map>
void intersection(int input1[], int input2[], int size1, int size2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print the output and don't return it.
     * Taking input is handled automatically.
     */
	unordered_map<int,int> umap;
    
    for(int i=0;i<size1;i++)
        umap[input1[i]]++;
    
    for(int i=0;i<size2;i++)
    {
        if(umap[input2[i]]>0)
            {
            cout<<input2[i]<<endl;
            umap[input2[i]]--;
        }
    }
}

