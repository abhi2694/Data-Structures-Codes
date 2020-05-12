class Solution {
public:
    
    auto distance(int x1, int y1, int x2, int y2) 
    {    
        return sqrt(pow(x2 - x1, 2) +  pow(y2 - y1, 2) ); 
    }
    
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int count = 0;
        
        auto dist = [](vector<int>& a, vector<int>& b) {
            return (a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]);
        };
        
        int n = points.size();
        
        for (int i = 0; i < n; ++i) {
            unordered_map<int, int> distToPts;
            
            for (int j = 0; j < n; ++j)
                if (i != j)
                    distToPts[dist(points[i], points[j])]++;
            for (auto& it: distToPts)
            {
                count+=it.second * (it.second - 1);
            }
        }
        
        return count;
    }
};number
