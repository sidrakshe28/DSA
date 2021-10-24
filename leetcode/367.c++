class Solution {
public:
    bool isPerfectSquare(int num) {
        long start = 1;
       long end = num;
       while(start<= end){
           long mid = start + (end-start)/2;
		   //mid * mid will overflow, using long to avoid the overflow.
           if(mid*mid < num){
               start = mid+1;
           }else if(mid*mid > num){
               end = mid-1;
           }else{
               return true;
           }
       }
        return false;
    }
        
    
};
