class Solution {
public:
    int check(vector<vector<int>>& mat,int row,int col){
        int sum=0;
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][col];
        }
        for(int i=0;i<mat[0].size();i++){
             sum+=mat[row][i];
        }
        if(sum==2)
            return 1;
        return 0;
    } 
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        for(int row=0;row<mat.size();row++){
            for(int col=0;col<mat[0].size();col++){
              if(mat[row][col]==1){
                  ans+=check(mat,row,col);
              }
            }
        }
        return ans;
    }
};