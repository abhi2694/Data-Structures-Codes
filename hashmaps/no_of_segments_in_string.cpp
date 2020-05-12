class Solution {
public:
    int countSegments(string s) {
        if(s[0]=='\0')
            return 0;
        
        bool flag = false;
        if(s[0]!=' ')
            flag = true;
        int k = 0;
        int i = 1;
        while(s[i]!='\0')
        {            
            if(s[i]==' ' && flag)
                k++;
            
            if(s[i]==' ')
                flag = false;
            else
                flag = true;
        i++;
        }
        if(flag)
            k++;
        return k;
    }
};
