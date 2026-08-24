class Solution {
public:

    bool isValid(string s) {
        int cnt = 0;

        for (char ch : s) {
            if (ch == '(')
                cnt++;
            else
                cnt--;

            // More closing brackets than opening brackets
            if (cnt < 0)
                return false;
        }

        return cnt == 0;
    }

    void generate(string s, int n, vector<string>& ans) {

        if (s.length() == 2 * n) {
            if (isValid(s))
                ans.push_back(s);

            return;
        }

        // Add '('
        generate(s + '(', n, ans);

        // Add ')'
        generate(s + ')', n, ans);
    }

    vector<string> generateParenthesis(int n) {

        vector<string> ans;

        generate("", n, ans);

        return ans;
    }
};