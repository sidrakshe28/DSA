class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // [5,1,3] -> [1,3,5]

        unordered_map<int,int> mp;
        for(auto x: nums)
            mp[x]++;
        // to store the freq of all integers

        int k = 0, min = nums[0];
        int n = nums.size();

        while(k < n and nums[k] == min)
            k++;
        
        int result = 0, prev = -1;

        for(int i = n - 1; i >=k; i--){
            if(nums[i] == prev)
                continue;
            result += mp[nums[i]] + (n - 1 - i);
            // (n - 1 - i) represents the total elements which need to be reduced
            // into least
            prev = nums[i];
        }
        return result;
    }
};