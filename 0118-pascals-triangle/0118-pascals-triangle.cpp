class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for (int row = 0; row < numRows; row++) {
            vector<int> currentRow;
            int ans = 1;
            currentRow.push_back(ans);
            for (int i = 0; i < row; i++) {
                ans = ans * (row - i);
                ans = ans / (i + 1);
                currentRow.push_back(ans);
            }
            triangle.push_back(currentRow);
        }
        return triangle;
    }
};