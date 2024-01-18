class Solution {
public:
    int climbStairs(int n) {
        
      int prev = 1;
    int prev2 = 1;
    // Running for loop to count all possible ways
    for (int i = 2; i <= n; i++) {
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    return prev;

    }
};