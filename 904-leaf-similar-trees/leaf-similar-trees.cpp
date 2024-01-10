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
   void getleaves(TreeNode* root, vector<int> &vec){
        if(root == NULL)return ;

        if(root -> left == NULL && root -> right == NULL){
            vec.push_back(root->val);
            return ;

        }
        getleaves(root -> left, vec);
        getleaves(root -> right, vec);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l , r;
        getleaves(root1,l);
        getleaves(root2,r);

        return l == r;
        
    }
};