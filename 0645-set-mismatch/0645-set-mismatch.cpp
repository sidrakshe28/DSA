class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int a;
        int b;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++)
        {
        if(nums[i]==nums[i+1])
        {
            a=nums[i];
            break;
        }
        }
        // Find the missing number
        for (int i = 1; i <=nums.size();i++) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                b = i;
                break;
            }
        }
        
        return {a,b};
    }
};    
    