class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> v{p1,p2,p3,p4}; sort(v.begin(), v.end());
        p1 = v[0], p2 = v[1], p3 = v[2], p4 = v[3];
        int x = (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]);
        int y = (p1[0]-p3[0])*(p1[0]-p3[0]) + (p1[1]-p3[1])*(p1[1]-p3[1]);
        int z = (p1[0]-p4[0])*(p1[0]-p4[0]) + (p1[1]-p4[1])*(p1[1]-p4[1]);
        return x == y && z == 2*x && x;
    }
};
