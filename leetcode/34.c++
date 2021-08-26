class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       if(nums.size() == 0 ) return {-1, -1}; 
        
           int low1 = 0; 
           int high1 = nums.size()-1; 
        // we are doing for leftest part 
        
           while(low1 <= high1){ 
             int mid = (low1 + high1)/2; 
               if(nums[mid] >= target) high1 = mid -1; 
               else low1 = mid +1 ; 
           } 
          if(low1 > nums.size()-1 || nums[low1]  != target) low1 = -1; 
        // now doing for rightest part 
        
        int low2 = 0; 
        int high2 = nums.size()-1; 
        while(low2 <= high2){ 
            int mid = (low2 + high2) / 2 ; 
             if(nums[mid] > target) high2 = mid -1; 
               else low2 = mid +1 ; 
        }
         if(high2 < 0 || nums[high2]  != target) high2 = -1;
        
         return {low1 , high2}; 
    }
    
};
