class Solution {
public:
    int knightDialer(int n) {
        if(n==1)return 10;
        vector<long> pre{1,1,1,1,1,0,1,1,1,1};
        vector<long> cur = pre;
        long mod = 1000000007;
        for(int i=1; i<n; i++){
            cur[0] = (pre[4] + pre[6])%mod;
            cur[1] = (pre[6] + pre[8])%mod;
            cur[2] = (pre[7] + pre[9])%mod;
            cur[3] = (pre[4] + pre[8])%mod;
            cur[4] = (pre[0] + pre[3] + pre[9])%mod;
            cur[6] = (pre[0] + pre[1] + pre[7])%mod;
            cur[7] = (pre[2] + pre[6])%mod;
            cur[8] = (pre[1] + pre[3])%mod;
            cur[9] = (pre[4] + pre[2])%mod;
            pre = cur;
        }
        int sum = 0;
        for(int i=0; i<10; i++)
            sum = (sum + cur[i])%mod;
        return sum;
    }
};