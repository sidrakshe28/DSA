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
    int count=0;
    int flag=1;
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> vec(9);
        vec[root->val-1]++;
        dfs(root, vec);
        return count;
    }
        void dfs(TreeNode* root, vector<int>& vec)
        {
            if(!root->left && !root->right)   {
                if(flag<2)  count++;
                return;
            }
            if(root->left){
                vec[root->left->val-1]++;
                if(vec[root->left->val-1] %2 == 0) flag--;
                else    flag++;
                dfs(root->left, vec);
                vec[root->left->val-1]--;
                if(vec[root->left->val-1] %2 == 0) flag--;
                else    flag++;
            }
            if(root->right) {
                vec[root->right->val-1]++;
                if(vec[root->right->val-1] %2 == 0) flag--;
                else    flag++;
                dfs(root->right, vec);
                vec[root->right->val-1]--;
                if(vec[root->right->val-1] %2 == 0) flag--;
                else    flag++;
            }
        }
};