class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N = 9;
        vector<unordered_set<int>> rowMap(N);
        vector<unordered_set<int>> colMap(N);
        vector<unordered_set<int>> boxMap(N);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int curr = (int) board[i][j];
                int boxNo = (i / 3) * 3 + j / 3;
                if (curr == '.') {
                    continue;
                }
                if (rowMap[i].count(curr) || colMap[j].count(curr)
                    || boxMap[boxNo].count(curr)) {
                        return false;
                }
                rowMap[i].insert(curr);
                colMap[j].insert(curr);
                boxMap[boxNo].insert(curr); 
            }
        }
        return true;
    }
};
