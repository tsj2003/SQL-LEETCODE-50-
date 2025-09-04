/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
       
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        bool leftright = true;
        while(!q.empty()){
            int size = q.size();

              vector<int>row(size);
             
             for(int i =0;i<size;i++){
             
             TreeNode* front  = q.front();
             q.pop();

             int index = (leftright) ? i : (size - 1 - i);

             row[index] = front->val;

             if(front->left) q.push(front->left);
             if(front->right) q.push(front->right);


             }
             //leftright = !leftright;
             res.push_back(row);

            

        }
        
        return res;
        
    }
    

};