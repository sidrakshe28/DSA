class Solution {
public:
   int findMax(const vector<int>& nums, int k, vector<int>& dp) {
        if(k >= nums.size()) {
            return 0;
        }
    
    
    
        if(dp[k] != -1) return dp[k];
        
        int includeCurrent = nums[k] + findMax(nums, k+2, dp);
        int ignoreCurrent = findMax(nums, k+1, dp);
        
        dp[k] = max(includeCurrent, ignoreCurrent);
        
        return dp[k];
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return findMax(nums, 0, dp);
        
        
    }
};