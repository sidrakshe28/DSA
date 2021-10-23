class Solution {
public:
    int guessNumber(int n) {
        
     
        long long left = 1;
        long long right = static_cast<long long>(n)+1;
        int mid = 0;
        while(left < right){
            mid = left + (right-left)/2;
            
            if(guess(mid) == 0){
                return mid;
            }
            if(guess(mid) == -1){
                right = mid;
            }else{
                left = mid + 1;
            }
            
        }
        return left;
        
    }
};
