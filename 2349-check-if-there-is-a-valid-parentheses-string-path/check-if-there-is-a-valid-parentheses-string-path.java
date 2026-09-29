class Solution {

    public static boolean solve(
            char[][] grid,
            Boolean[][][] dp,
            int i,
            int j,
            int curr
    ) {

        int n = grid.length;
        int m = grid[0].length;

        // Invalid balance
        if (curr < 0) {
            return false;
        }

        // End of grid
        if (i == n - 1 && j == m - 1) {
            if (grid[i][j] == '(') {
                curr++;
            } else {
                curr--;
            }

            return curr == 0;
        }

        // Add current character
        if (grid[i][j] == '(') {
            curr++;
        } else {
            curr--;
        }

        // Invalid balance
        if (curr < 0) {
            return false;
        }

        // Already calculated
        if (dp[i][j][curr] != null) {
            return dp[i][j][curr];
        }

        boolean down = false;
        boolean right = false;

        // Down
        if (i < n - 1) {
            down = solve(grid, dp, i + 1, j, curr);
        }

        // Right
        if (j < m - 1) {
            right = solve(grid, dp, i, j + 1, curr);
        }

        return dp[i][j][curr] = down || right;
    }

    public boolean hasValidPath(char[][] grid) {

        int n = grid.length;
        int m = grid[0].length;

        // Maximum possible balance is n + m
        Boolean[][][] dp = new Boolean[n][m][n + m + 1];

        return solve(grid, dp, 0, 0, 0);
    }
}