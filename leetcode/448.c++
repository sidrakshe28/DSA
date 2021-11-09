class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
         vector<int> result;
        int n = nums.size();
        int i = 0;
        while(i < n){
            int correct = nums[i]-1;
            if(nums[i] != nums[correct]){
                int temp = nums[i];
                nums[i] = nums[correct];
                nums[correct] = temp;
            }
            else
                i++;
        }
        
        
        for(int i = 0; i < n; i++){
            if(i != nums[i] - 1)
                result.push_back(i+1);
        }
        
        
        return result;
    }
};
