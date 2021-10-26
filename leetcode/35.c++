class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       
    int nStart= 0, nEnd = nums.size()-1;
        
        while(nStart<=nEnd)
        {            
            int nMid = nStart + (nEnd - nStart)/2; // Similar to "nMid = (nStart+nEnd) /2 )", to  avoid overflow.
            
            if(target == nums[nMid])
                return nMid;
            else if(target < nums[nMid])
                nEnd = nMid - 1;
            else
                nStart = nMid + 1;
        }
       return nStart; 
        
    }
};
