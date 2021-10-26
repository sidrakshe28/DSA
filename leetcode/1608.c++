class Solution {
public:
    int specialArray(vector<int>& nums) {
        
         sort(nums.begin(),nums.end());
      int n=nums.size();
        for(int i=n-1;i>=1;i--){
            if(nums[i]!=nums[i-1]){
                if(n-i>nums[i-1]&&n-i<=nums[i]) return n-i;
            }
        }
        if(n<=nums[0]) return n;
        
        return -1;
    }
};
