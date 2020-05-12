class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<unordered_map<char,bool>> v;
        unordered_map<char,bool> x;
        unordered_map<char,bool> y;
        unordered_map<char,bool> z;
        x['Q'] = true;
        x['q'] = true;
        x['W'] = true;
        x['w'] = true;
        x['E'] = true;
        x['e'] = true;
        x['R'] = true;
        x['r'] = true;
        x['T'] = true;
        x['t'] = true;
        x['y'] = true;
        x['Y'] = true;
        x['U'] = true;
        x['u'] = true;
        x['I'] = true;
        x['i'] = true;
        x['O'] = true;
        x['o'] = true;
        x['P'] = true;
        x['p'] = true;
        
        
        y['A'] = true;
        y['a'] = true;
        y['S'] = true;
        y['s'] = true;
        y['D'] = true;
        y['d'] = true;
        y['F'] = true;
        y['f'] = true;
        y['G'] = true;
        y['g'] = true;
        y['H'] = true;
        y['h'] = true;
        y['J'] = true;
        y['j'] = true;
        y['K'] = true;
        y['k'] = true;
        y['L'] = true;
        y['l'] = true;
        
        z['Z'] = true;
        z['z'] = true;
        z['X'] = true;
        z['x'] = true;
        z['C'] = true;
        z['c'] = true;
        z['V'] = true;
        z['v'] = true;
        z['B'] = true;
        z['b'] = true;
        z['N'] = true;
        z['n'] = true;
        z['M'] = true;
        z['m'] = true;
        
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        
        int n = words.size();
        
        vector<string> res;
        
        for(int i=0;i<n;i++)
        {
            unordered_map<char,bool> temp;
            
            int a = words[i][0];
            
            //int f = -1;
            
            for(int j=0;j<3;j++)
            {     
                if(v[j].count(a)>0)
                {
                    temp = v[j];
                    break;
                }
            }
            
            int k = words[i].length();
            int h = 0;
            for(h = 0;h<k;h++)
            {
                if(temp.count(words[i][h])==0)
                    break;
            }
            if(h==k)
                res.push_back(words[i]);
                
        }
        return res;

    }
};
