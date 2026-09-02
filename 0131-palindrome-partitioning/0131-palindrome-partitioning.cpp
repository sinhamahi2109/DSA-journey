class Solution {
public:
   
    vector<vector<string>> ans;
    vector<string> path;

    void solve(int index, string &s, vector<vector<bool>> &dp) {
        if (index == s.size()) {
            ans.push_back(path);
            return;
        }

        for (int end = index; end < s.size(); end++) {
            if (dp[index][end]) {
                path.push_back(s.substr(index, end - index + 1));

                solve(end + 1, s, dp);

                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (s[i] == s[j] &&
                    (j - i < 2 || dp[i + 1][j - 1])) {
                    dp[i][j] = true;
                }
            }
        }

        solve(0, s, dp);

        return ans;
    }
};
