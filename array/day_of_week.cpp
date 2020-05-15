class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        if(month<=2)
        {
        year--;
        month+=12;
        }
        
        int j=year/100, k=year%100;
        
        int h=(day + 26*(month+1)/10 + k + k/4 + j/4 + j*5 ) % 7;
        
    vector<string> v= {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    return v[h];
    }
};