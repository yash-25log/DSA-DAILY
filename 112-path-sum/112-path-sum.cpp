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
    bool ans = false;
    
    void solve(TreeNode* root, int targetSum){
        //true condition
        if(!root->left and !root->right and targetSum == 0){
            ans = true;
            return;
        }
        
        //go left
        if(root->left != NULL){
            solve(root->left,(targetSum - root->left->val));
        }
        //go right
        if(root->right){
            solve(root->right,targetSum - root->right->val);
        }
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        //check for empty tree
        if(!root) return false;
        solve(root, targetSum - root->val);
        return ans;
        
        
    }
};