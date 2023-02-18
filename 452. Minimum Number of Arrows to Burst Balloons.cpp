class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        if(points.size() == 0) {
            return 0;
        }
        
        sort(points.begin(), points.end());

        int arrows = 1;
        int end = points[0][1];

        for(int i=1; i<points.size(); i++) {
            if(points[i][0] > end){
                arrows++;
                end = points[i][1];
            }
            else{
                end = min(end, points[i][1]);
            }
        }
        return arrows;
    }
};
