class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if (nums.size() == 0) {
            return false;
        }

        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return true;
            }

            while (start < mid && nums[start] == nums[mid] && nums[end] == nums[mid]) {
                start++;
                end--;
            }

            if (nums[start] <= nums[mid]) {
                // Left side is sorted. Right side is unsorted.
                if (target >= nums[start] && target < nums[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            } else {
                // Left side is unsorted. Right side is sorted.
                if (target > nums[mid] && target <= nums[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return false;
    }
        
    
};
