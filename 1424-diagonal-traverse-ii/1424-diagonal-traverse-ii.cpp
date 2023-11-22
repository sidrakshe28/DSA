class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        int i,j;
        for(i=0;i<nums.size();i++) {
            for(j=0;j<nums[i].size();j++) {
                   if (i + j >= ans.size()) {
                    ans.resize(i + j + 1);
                }
                    ans[i+j].push_back(nums[i][j]);
            }
        }
        for(int i=0;i<ans.size();i++) {
              for(int j=ans[i].size()-1;j>=0;j--) {
                    res.push_back(ans[i][j]);
            }
        }
        return res;
    }
};