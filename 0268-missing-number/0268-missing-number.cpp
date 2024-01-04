class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s1=(n*(n+1))/2;
        int s2=0;
        
        for(int i=0;i<nums.size();i++){
            s2=s2+nums[i];
        }
        int missing=s1-s2;
        return missing;
    }
};