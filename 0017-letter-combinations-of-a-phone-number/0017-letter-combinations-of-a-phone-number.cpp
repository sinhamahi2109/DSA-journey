class Solution {
public:
void solve(int index, string& digits, string& current,
               vector<string>& ans, vector<string>& mapping) {

        // Base case
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        int digit = digits[index] - '0';

        // Get letters corresponding to the digit
        string letters = mapping[digit];

        for (char ch : letters) {
            current.push_back(ch);

            solve(index + 1, digits, current, ans, mapping);

            current.pop_back(); // Backtrack
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if (digits.empty())
            return ans;

        vector<string> mapping = {
            "",     // 0
            "",     // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };

        string current = "";

        solve(0, digits, current, ans, mapping);

        return ans;    
    }
};