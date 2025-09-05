/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;

        
      if(root == p || root == q ) return root;


      TreeNode* leftn =   lowestCommonAncestor(root->left , p , q);
      TreeNode* rightn = lowestCommonAncestor(root->right , p , q);
         if(leftn!= NULL && rightn != NULL) return root;

        if(leftn != NULL){
            return leftn;
        }

        else{
            return rightn;
        }
    }
};