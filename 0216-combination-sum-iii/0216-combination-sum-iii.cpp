class Solution {
public:
 void solve(int start, int k, int n, vector<int>& temp,
               vector<vector<int>>& ans) {
        
        // Valid combination found
        if (k == 0 && n == 0) {
            ans.push_back(temp);
            return;
        }

        // Invalid case
        if (k == 0 || n <= 0)
            return;

        for (int i = start; i <= 9; i++) {
            // Pruning: no need to continue
            if (i > n)
                break;

            temp.push_back(i);

            solve(i + 1, k - 1, n - i, temp, ans);

            temp.pop_back(); // Backtracking
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(1, k, n, temp, ans);

        return ans;
    }
};