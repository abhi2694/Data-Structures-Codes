#include<unordered_map>
#include<string.h>
int makeAnagram(char str1[], char str2[]){
	/* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    unordered_map<char,int> umap;
    
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    
    for(int i=0;str1[i]!='\0';i++)
    {
        umap[str1[i]]++;
    }
    
    int c = 0;
    
    for(int i=0;str2[i]!='\0';i++)
    {
        if(umap.count(str2[i])>0)
        {
            c++;
            umap[str2[i]]--;
            if(umap[str2[i]]==0)
                umap.erase(str2[i]);
        }
    }
    
    return (l1+l2 - (2*c));
     
}

