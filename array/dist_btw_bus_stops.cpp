class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n = distance.size();
        int c = 0;
        int d = 0;
        for(int i=start;i!=destination;i++)
        {
            c+=distance[i];
            if(i==n-1)
                i = -1;
        }
        
        for(int j = start-1;j!=destination-1;j--)
        {
            if(j<0)
                j = n-1;
            
            d+=distance[j];
        }
        
        return min(c,d);
    }
};