class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root->left== nullptr && root->right==nullptr)return true;
        int pre = INT_MIN;
        int aim = 0;
        bool cond = true;
        while(root)
        {
            if(!root->left)
            {
                if(pre == INT_MIN && root->val == INT_MIN && aim == 0)
                {
                    aim++;
                }
                else if(root->val <= pre)cond= false;
                pre = root->val;
                root = root->right;
            }
            else if(root->left)
            {
                TreeNode * prev = root->left;
                while(prev->right != nullptr && prev->right != root)
                {
                    prev = prev->right;
                }
                if(!prev->right )
                {
                    prev->right = root;
                    root=root->left;
                }
                else if(prev->right ==root)
                {
                    prev->right = nullptr;
                    if(root->val <= pre)cond = false;
                    pre = root->val;
                    root = root->right;
                }
            }
        }
        return cond;
    }
};
