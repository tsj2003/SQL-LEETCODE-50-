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

public:     TreeNode* helper(vector<int>& nums , int leftt, int rightt){
if(rightt<leftt) return NULL;
    int mid  = leftt + (rightt - leftt)/2;
    TreeNode* root = new TreeNode (nums[mid]);
    root->left = helper(nums,leftt, mid-1);
    root->right = helper(nums , mid+1,rightt);

    return root;
    
}

    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return  helper(nums ,  0 ,nums.size() - 1);

    }
};