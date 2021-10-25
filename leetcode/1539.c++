class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int num;
        
        if(arr[0] > k)
            return k;
       //int i=0;
        int start=1;
        int end=arr.size()-1;
        int closemid=0;
        while(start<=end)
        {
            int mid=end+(start-end)/2;
            
        
         if (arr[mid]-(mid+1)< k)
        {
          closemid=mid+1;
             start=mid+1;
        }
        else{
            end=mid-1;
        }
            
        }
        
        return k+closemid;
    }
};
