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

    int height(TreeNode* root){
     
     if(!root) return 0;


     int left = height(root->left);
     int right = height(root->right);
     int height = max(left , right)+ 1;
     return height;
    }
    bool isBalanced(TreeNode* root) {

        if(!root) return true;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool hei   = abs( height(root->left) - height(root->right)) <= 1;

        if(left && right && hei){
            return 1;
        }
        else{
            return 0;
        }
        
    }
};