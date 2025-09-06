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
public:  int maxsum = INT_MIN;



    int  solve(TreeNode* root ){

        if(root == NULL) return 0;

        int l  =  solve(root->left);
        int r  =  solve(root->right);


        int neche_se_left_wala = (l + r + root->val);
        int left_wala = (max(l,r)  + root->val);
        int root_wala = root->val;

        maxsum = max({maxsum ,neche_se_left_wala,left_wala, root_wala});

      return max(left_wala,root_wala);

    }
    int maxPathSum(TreeNode* root) {

        solve(root);
        return maxsum;
    }
};