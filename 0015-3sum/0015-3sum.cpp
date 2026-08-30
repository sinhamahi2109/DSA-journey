class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; ++i) {
            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Smallest possible sum > 0 → stop
            if (nums[i] + nums[i + 1] + nums[i + 2] > 0)
                break;

            // Largest possible sum < 0 → skip this i
            if (nums[i] + nums[n - 2] + nums[n - 1] < 0)
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = (long long)nums[i] + nums[left] + nums[right];

                if (sum < 0) {
                    ++left;
                }
                else if (sum > 0) {
                    --right;
                }
                else {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    int leftVal = nums[left];
                    int rightVal = nums[right];

                    // Move directly past duplicates
                    while (left < right && nums[left] == leftVal)
                        ++left;

                    while (left < right && nums[right] == rightVal)
                        --right;
                }
            }
        }

        return ans;
    }
    
};