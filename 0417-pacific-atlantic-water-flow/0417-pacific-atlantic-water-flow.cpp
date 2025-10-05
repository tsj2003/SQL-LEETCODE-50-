class Solution {
public:
    int m, n;
    vector<vector<int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    
    void dfs(vector<vector<int>>& heights, int r, int c, vector<vector<int>>& ocean, int prevHeight) {
        // out of bounds or already visited or cannot flow upward
        if (r < 0 || c < 0 || r >= m || c >= n || ocean[r][c] || heights[r][c] < prevHeight)
            return;
        
        ocean[r][c] = 1;
        
        for (auto &d : dirs) {
            dfs(heights, r + d[0], c + d[1], ocean, heights[r][c]);
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();
        
        vector<vector<int>> pac(m, vector<int>(n, 0));
        vector<vector<int>> atl(m, vector<int>(n, 0));
        
        // Pacific - top row and left col
        for (int i = 0; i < m; ++i)
            dfs(heights, i, 0, pac, heights[i][0]);
        for (int j = 0; j < n; ++j)
            dfs(heights, 0, j, pac, heights[0][j]);
        
        // Atlantic - bottom row and right col
        for (int i = 0; i < m; ++i)
            dfs(heights, i, n - 1, atl, heights[i][n - 1]);
        for (int j = 0; j < n; ++j)
            dfs(heights, m - 1, j, atl, heights[m - 1][j]);
        
        vector<vector<int>> res;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (pac[i][j] && atl[i][j])
                    res.push_back({i, j});
            }
        }
        return res;
    }
};