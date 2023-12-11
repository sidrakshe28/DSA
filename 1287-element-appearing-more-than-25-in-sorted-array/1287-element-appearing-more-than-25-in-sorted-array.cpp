class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int ns = arr.size()/4;
        int n  = arr.size();
        int prev = arr[0];
        int l = 0;
        for(int r = 1; r<n;r++)
        {
            if(arr[r]==prev) 
            {
                if((r-l)>=ns)
                    return prev;
            }
            else 
                l = r;
            prev = arr[r];
        }
        return prev;
    }
};