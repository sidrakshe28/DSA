class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        
        vector<int> sortedTree;
        inOrder(root, sortedTree);
        
        int low = 0, high = sortedTree.size() - 1;
        while(low < high){
            int curSum = sortedTree[low] + sortedTree[high];
            if(curSum == k)
                return true;
            else if(curSum > k)
                high--;
            else low++;
        }
        return false;
    }
    void inOrder(TreeNode* root, vector<int>& ans){
        if(!root) return;
        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);
    }
};
        
    
