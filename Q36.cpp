//36)Valid Sudoku
/*Determine if a 9 x 9 Sudoku board is valid. */

using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for (int i = 0; i < b.size(); i++) {
            for (int j = 0; j < b[0].size(); j++) {
                if (b[i][j] == '.')
                    continue;
                for (int n = 0; n < 9; n++) {
                    if (j != n)
                        if (b[i][j] == b[i][n])
                            return false;
                    if (i != n)
                        if (b[i][j] == b[n][j])
                            return false;
                    if (i != 3 * (i / 3) + n / 3 || j != 3 * (j / 3) + n % 3)
                        if (b[i][j] == b[3 * (i / 3) + n / 3][3 * (j / 3) + n % 3])
                            return false;
                }
            }
        }
        return true;
    }
};
