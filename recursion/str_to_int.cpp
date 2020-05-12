#include<bits/stdc++.h>
int stringToNumber(char input[]) {
    // Write your code here
    if(input[0]=='\0')
        return 0;
    
    return pow(10,strlen(input)-1)*(input[0]-48) + stringToNumber(input+1);
}



