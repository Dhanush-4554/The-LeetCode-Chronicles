class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix[0].size()-1;
        int r_start = 0;
        int r_end = matrix.size()-1;
        int mid;
        while(r_start <= r_end)
        {
            mid = (r_start + r_end)/2;
            if(matrix[mid][0] <= target && matrix[mid][high] >= target)
                break;
            if(matrix[mid][0] > target)
            {
                r_end = mid - 1;
            }
            else
                r_start = mid + 1;
        }
        r_start = mid;
        while(low <= high)
        {
            mid = (low+high)/2;
            if(matrix[r_start][mid] == target)
                return 1;
            if(matrix[r_start][mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return 0;
    }
};
