class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=0;i<n;i++){
            if(i+1<n && (arr[i+1]-arr[i]>1)){
                arr[i+1]=arr[i]+1;
            }
        }
        return *max_element(arr.begin(),arr.end());
    }
};