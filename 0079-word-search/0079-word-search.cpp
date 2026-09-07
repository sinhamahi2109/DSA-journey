class Solution {
public:
int rows, cols;

    bool dfs(vector<vector<char>>& board, string& word,
             int row, int col, int index) {

        // পুরো word মিলেছে
        if (index == word.length())
            return true;

        // Boundary check + character mismatch
        if (row < 0 || col < 0 || row >= rows || col >= cols ||
            board[row][col] != word[index])
            return false;

        // Current cell temporarily visited mark করি
        char temp = board[row][col];
        board[row][col] = '#';

        // 4 directions এ search
        bool found =
            dfs(board, word, row + 1, col, index + 1) ||
            dfs(board, word, row - 1, col, index + 1) ||
            dfs(board, word, row, col + 1, index + 1) ||
            dfs(board, word, row, col - 1, index + 1);
            board[row][col] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size();
        cols = board[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (dfs(board, word, i, j, 0))
                    return true;
            }
        }

        return false;

    
        
    }
};