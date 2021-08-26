class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
         int n=letters.size();
        int res;
        if(n==1)
            return letters[0];
        
        if(letters[0]>target)
        {
            return letters[0];
        }
        if(letters[n-1]<=target)
        {
            return letters[0];
        }
        
        int start=0,end=n-1;
         while(start<=end)
         {
             int mid=start+(end-start)/2;
             if(letters[mid]==target)
             {
                 start=mid+1;
             }
             else if(letters[mid]>target)
             {
                 res=mid;
                 end=mid-1;
             }
                 
             else{
                 //letters[mid]<target
                 start=mid+1;
             }
            
         }
        
        return letters[res];
        
    }
};
