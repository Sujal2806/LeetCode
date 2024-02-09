//37)Sudoku Solver
/*Write a program to solve a Sudoku puzzle by filling the empty cells.*/

using namespace std;
class Solution {
public:
    bool valid(vector<vector<char>>& b, int r, int co, char c) {
        for (int i = 0; i < 9; i++) {
            if (b[r][i] == c)
                return false;
            if (b[i][co] == c)
                return false;
            if (b[3 * (r / 3) + (i / 3)][3 * (co / 3) + (i % 3)] == c)
                return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>& b) {
        for (int i = 0; i < b.size(); i++) {
            for (int j = 0; j < b[0].size(); j++) {
                if (b[i][j] == '.') {
                    for (char c = '1'; c <= '9'; c++) {
                        if (valid(b, i, j, c) == true) {
                            b[i][j] = c;
                            if (solve(b) == true) {
                                return true;
                            } else {
                                b[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) { solve(board); }
};
