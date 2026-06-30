class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /* Using bitsets */
        // row[i]  -> which digits are used in row i
        // col[j]  -> which digits are used in column j
        // box[k]  -> which digits are used in box k
        // We use size 10 so index 1..9 are used; index 0 is unused.
        vector<bitset<10>> row(9), col(9), box(9);

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char c = board[i][j];

                if (c == '.') {
                    // Empty cell, skip
                    continue;
                }

                // Convert char '1'..'9' to int 1..9
                int digit = c - '0';

                // Calculate 0..8 index for 3x3 box
                int boxIndex = (i / 3) * 3 + (j / 3);

                // If digit already used in row/col/box, invalid
                if (row[i].test(digit) || col[j].test(digit) || box[boxIndex].test(digit)) {
                    return false;
                }

                // Mark digit as used in row, column, and box
                row[i].set(digit);
                col[j].set(digit);
                box[boxIndex].set(digit);
            }
        }

        // No conflicts found
        return true;
    }
};
