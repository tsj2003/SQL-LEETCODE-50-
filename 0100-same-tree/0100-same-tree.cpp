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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return 1;

        if(p == NULL && q !=NULL) return false; 
        if(q == NULL && p != NULL) return false; 

         bool l =isSameTree(p->left , q->left);
         bool r =isSameTree(p->right , q->right);

         bool value = (p->val == q->val);

         if(l && r && value) return true;


         return false;
        
    }
};