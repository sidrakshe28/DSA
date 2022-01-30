class Solution {
public:
    int max(int a, int b) { return (a > b) ? a : b; }
    string shortestCommonSupersequence(string str1, string str2) {
       int n=str1.length(), m=str2.length();
	    int dp[n+1][m+1];
	    for(int i=0; i<=n; i++)
	    {
	        for(int j=0; j<=m; j++)
	        {
	            if(i==0 || j==0)
	                dp[i][j]=0;
	               
	            else if(str1[i-1]==str2[j-1])
	                dp[i][j]=1+dp[i-1][j-1];
	               
	            else
	                dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
	               
	        }
	    }
        
        int i=n, j=m;
        string str;
        while(i!=0 && j!=0)
        {
            if(str1[i-1]==str2[j-1])
            {
                str+=str1[i-1];
                i--;
                j--;
            }
            else
            {
                if(dp[i-1][j]<dp[i][j-1])
                {
                    str+=str2[j-1];
                    j--;
                }
                else
                {
                    str+=str1[i-1];
                    i--;
                }
            }
        }
        while(j>0)
        {
            str+=str2[j-1];
            j--;
        }
        while(i>0)
        {
            str+=str1[i-1];
            i--;
        }
            
        reverse(str.begin(), str.end());
        return str;
        
    }
    
};
