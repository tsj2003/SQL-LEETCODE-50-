class Solution {
public:
    int dp[105][105]; // memo table

    int solve(vector<int>& values, int i, int j) {
        // Base case: we need at least 3 points to make a triangle
        if (j - i + 1 < 3) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        int result = INT_MAX;

        // Try all possible "k" to form a triangle (i, k, j)
        for (int k = i + 1; k < j; k++) {
            int wt = values[i] * values[k] * values[j]
                     + solve(values, i, k)
                     + solve(values, k, j);

            result = min(result, wt);
        }

        return dp[i][j] = result;
    }

    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        memset(dp, -1, sizeof(dp));
        return solve(values, 0, n - 1);
    }
};