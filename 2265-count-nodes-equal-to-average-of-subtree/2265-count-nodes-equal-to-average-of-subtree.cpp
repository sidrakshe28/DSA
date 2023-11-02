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
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        dfs(root, count);
        return count;
    }
private:
    pair<int,int> dfs(TreeNode* root, int& count){
        if(!root) return {0,0};

        auto left = dfs(root->left, count);
        auto right = dfs(root->right, count);

        int totalSum = left.first + right.first + root->val;
        int totalCount = left.second + right.second + 1;

        if(totalSum / totalCount == root->val) count ++;

        return {totalSum, totalCount};
    }
};