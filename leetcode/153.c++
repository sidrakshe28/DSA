class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int len = nums.size();
        if (len == 1 || nums[0] < nums[len - 1]) {
            return nums[0];
        }

        int start = 0;
        int end = len - 1;

        while (start < end) {
            if (nums[start] < nums[end]) {
                return nums[start];
            }

            int mid = start + (end - start) / 2;

            if (nums[mid] < nums[end]) {
                end = mid;
            } else if (nums[mid] > nums[start]) {
                start = mid + 1;
            } else {
                if (nums[end - 1] > nums[end]) {
                    return nums[end];
                }
                end--; // End cannot be pivot anymore
            }
        }

        return nums[start];
        
    }
};
