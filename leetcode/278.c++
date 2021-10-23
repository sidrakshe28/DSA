class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0 ; 
        int high = n;
        int res = -1;
        while (low <= high){
            int mid = low + (high-low)/2;
            if (isBadVersion(mid)){
                high = mid -1;
                res = mid;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
};
