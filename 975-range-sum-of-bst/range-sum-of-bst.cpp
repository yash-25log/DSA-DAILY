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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL) return 0;
        if(root -> left == NULL && root -> right == NULL)return root->val;

        return traverse(root, low, high, 0);
    }
    int traverse(TreeNode* root, int l, int h, int sum){
        if(root == NULL)return 0;
        int s = 0;
        if(root -> val >= l && root-> val <= h){
            s = root -> val;

        }
        int lsum = traverse(root->left, l, h, s);
        int rsum = traverse(root->right, l, h, s);
        return lsum + rsum + s;

    }
};