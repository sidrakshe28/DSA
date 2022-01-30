class Solution {
public:
   int lcs(string x,string y,int n){
    int dp[n+1][n+1];
    
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }
     for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            
            if(x[i-1]==y[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
            }
        }     
    }
    return dp[n][n];
    
}

int longestPalindromeSubseq(string x) {
   
    string y=x;
        reverse(x.begin(),x.end());
    int n=x.length();
    return lcs(x,y,n);
    
}
    
};
