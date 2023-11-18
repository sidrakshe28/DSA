class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int ans = 1 , i = 0;
        long windSum = 0;
        sort(nums.begin(),nums.end());
        for(int j = 0 ; j < nums.size() ; j++)
        {   
            int target = nums[j];
            windSum += target;
            long cond = (long)( j - i + 1 ) * target  - windSum;
            while(cond > k )
            {
                windSum -= nums[i];
                i++;
                cond = (long)( j - i + 1 ) * target  - windSum;
            }
            ans = max(ans,j-i+1);
        } 
        return ans;
    }
};