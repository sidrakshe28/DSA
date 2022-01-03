class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int ans=nums[0];
        int ma=ans;
        int mi=ans;
        
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0){
                swap(ma,mi);
            }
            ma=max(nums[i],ma*nums[i]);
        mi=min(nums[i],mi*nums[i]);
        ans=max(ans,ma);
        
        }
        return ans;
        
    }
};
