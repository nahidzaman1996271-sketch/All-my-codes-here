class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int strips = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    if (i == 0) {
                        strips++;
                    }
                    if (i == grid.size() - 1) {
                        strips++;
                    }
                    if (j == 0) {
                        strips++;
                    }
                    if (j == grid[i].size() - 1) {
                        strips++;
                    }
                    if (j != grid[i].size() - 1 and grid[i][j + 1] == 0) {
                        strips++;
                    }
                    if (j != 0 and grid[i][j - 1] == 0) {
                        strips++;
                    }
                    if (i != 0 and grid[i - 1][j] == 0) {
                        strips++;
                    }
                    if (i != grid.size() - 1 and grid[i + 1][j] == 0) {
                        strips++;
                    }
                }
            }
        }
        return strips;
    }
};