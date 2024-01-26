class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int ans=0;
        
        while(start<= end){    
            int h=min(height[start],height[end]);
            ans=max(ans,h * (end-start));//take max to keep track of max of ans
            
            if(height[start] <=height[end]){
            start++;
                }
            
            else{
            end--;
                
             }
            
            
        }
        
        return ans;
        
    }   
        
    
};