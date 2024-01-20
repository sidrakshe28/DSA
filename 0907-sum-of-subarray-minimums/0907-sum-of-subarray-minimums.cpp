class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<long long>dp(n,0);
        vector<int>st;
        int m=1e9+7;
        long long ans=0;

        for(int i=0;i<n;i++){
            while(st.size()!=0 && arr[i]<=arr[st.back()]){
                st.pop_back();
            }
            if(st.size()==0){
                dp[i]=(arr[i]*(i+1))%m;
            }
            else{
                int end=st.back();
                dp[i]=(dp[end]+(arr[i]*(i-end))%m)%m;
            }

            st.push_back(i);
            ans=(ans+dp[i])%m;
        }
        return ans;
    }
};