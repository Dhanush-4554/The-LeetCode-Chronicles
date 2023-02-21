class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<vector<int>> ans;
        for (int j = 0; j < n - 3; j++)
        {

            if (j == 0 || arr[j] != arr[j - 1])
            {
                long long int target2 = target - arr[j];
                for (int i = j + 1; i < n - 2; i++)
                {
                   long long int target3 = target2 - arr[i];

                    if (i == j + 1 || arr[i] != arr[i - 1])
                    {

                        int low = i + 1;
                        int high = arr.size() - 1;
                        while (low < high)
                        {
                            int sum = arr[low] + arr[high];
                            if (sum == target3)
                            {
                                ans.push_back({arr[j], arr[i], arr[low], arr[high]});
                                while (low < high && arr[low] == arr[low + 1])
                                {
                                    low++;
                                }
                                while (low < high && arr[high] == arr[high - 1])
                                {
                                    high--;
                                }

                                low++;
                                high--;
                            }

                            else if (sum < target3)
                            {
                                low++;
                            }
                            else
                            {
                                high--;
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};
