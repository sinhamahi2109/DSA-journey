class Solution {
public:
     void solve(int index, vector<int>& candidates, int target,
               vector<int>& current, vector<vector<int>>& ans) {
        
        // Base case
        if (index == candidates.size()) {
            if (target == 0)
                ans.push_back(current);
            return;
        }

        // Take the current element (can be taken multiple times)
        if (candidates[index] <= target) {
            current.push_back(candidates[index]);

            solve(index, candidates, target - candidates[index], current, ans);

            current.pop_back(); // Backtrack
        }

        // Don't take the current element
        solve(index + 1, candidates, target, current, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> current;

        solve(0, candidates, target, current, ans);

        return ans;
        
    }
};