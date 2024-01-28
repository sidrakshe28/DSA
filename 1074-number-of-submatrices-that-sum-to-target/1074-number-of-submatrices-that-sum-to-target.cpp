class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int ans=0;
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int y=1;y<=m-j;y++){
                    int sum=0;
                    int pre=0;
                    for(int x=i;x<n;x++){
                        if(j>0)pre=matrix[x][j-1];
                        sum+=(matrix[x][j+y-1]-pre);
                        if(sum==target)ans++;
                    }
                }
                        
            }
        }   
        return ans;
    }
};