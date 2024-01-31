class Solution {
public:
    public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int mini=INT_MAX;
        // vector<vector<int>>dp(n, vector<int>(n, 0));
        vector<int>prev(n, 0);

        for(int j=0;j<n;j++)prev[j]=matrix[0][j];

        for(int i=1;i<n;i++){
            vector<int>curr(n, 0);
            for(int j=0;j<n;j++){
                int up=matrix[i][j] + prev[j];
                int ld=INT_MAX, rd=INT_MAX;
                if(j>0)
                    ld=matrix[i][j] + prev[j-1];
                if(j<n-1)
                    rd=matrix[i][j] + prev[j+1];
                curr[j] = min(up, min(ld, rd));
            }
            prev=curr;
        }


        for(int j=0;j<n;j++){
            mini=min(mini, prev[j]);
        }
        return mini;
    }
};