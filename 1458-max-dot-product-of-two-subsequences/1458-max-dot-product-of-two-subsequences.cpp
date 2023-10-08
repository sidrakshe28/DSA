class Solution {
public:
    int dp[501][501];
    vector<int> nums1;
    vector<int> nums2;
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        memset(dp, -1, sizeof(dp));
        return solve(0, 0);
    }

    int solve(int i, int j) {
        if (i == nums1.size() || j == nums2.size()) return INT_MIN;
        if (dp[i][j] != -1) return dp[i][j];
        int res = INT_MIN;
        res = max(res, max(solve(i + 1, j + 1), 0) + nums1[i] * nums2[j]);
        res = max(res, solve(i + 1, j));
        res = max(res, solve(i, j + 1));
        return dp[i][j] = res;
    }
};