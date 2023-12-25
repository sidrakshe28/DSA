class Solution {
public:
    unsigned int helper(int i,string &s,vector<int> & dp){
        if(i>=s.length()) return 1;

        if(dp[i]!=-1) return dp[i];
        int x=stoi(s.substr(i,1));
        int y=stoi(s.substr(i,2));
        int ans1=0;
        int ans2=0;
        if(x>=1 && x<=9){
                ans1+=helper(i+1,s,dp);
        }
        if(y>=10 && y<=26){
                ans1+=helper(i+2,s,dp);
        }

        return dp[i]=ans1+ans2;
    }
    int numDecodings(string s) {
        int n=s.length();
        vector<int> dp (n+1,0);
        // return helper(0,s,dp);
        dp[n]=1;
        for(int i=n-1;i>=0;i--){
            int ans1=s[i+1]!='0' && s[i]!='0' ? dp[i+1]:0;
            int ans2=s[i]!='0' && i+1<n && stoi(s.substr(i,2))<=26 ? dp[i+2]:0;
            dp[i]=ans1+ans2;
        }
        return dp[0];
    }
};