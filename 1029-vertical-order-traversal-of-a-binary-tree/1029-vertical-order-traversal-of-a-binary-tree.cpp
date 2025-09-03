class Solution {
public:
    // Map: column -> vector of (row, value) pairs
    map<int, vector<pair<int, int>>> columnMap;
    
    void dfs(TreeNode* root, int row, int col) {
        if (root == NULL) return;
        
        // Add current node to the column map
        columnMap[col].push_back({row, root->val});
        
        // Traverse left subtree (row+1, col-1)
        dfs(root->left, row + 1, col - 1);
        
        // Traverse right subtree (row+1, col+1)
        dfs(root->right, row + 1, col + 1);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if (!root) return {};
        
        // Start DFS from root at position (0, 0)
        dfs(root, 0, 0);
        
        vector<vector<int>> result;
        
        // Process each column from left to right
        for (auto& [col, nodes] : columnMap) {
            // Sort by row first, then by value if same row
            sort(nodes.begin(), nodes.end());
            
            vector<int> columnValues;
            for (auto& [row, val] : nodes) {
                columnValues.push_back(val);
            }
            result.push_back(columnValues);
        }
        
        return result;
    }
};