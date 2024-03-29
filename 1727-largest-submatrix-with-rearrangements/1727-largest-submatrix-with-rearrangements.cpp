class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int area = 0;

        for(int i=1; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==1){
                    matrix[i][j] += matrix[i-1][j];
                }
            }
        }

        for(int i=m-1; i>=0; i--){
            sort(matrix[i].begin(), matrix[i].end());
            int k = 1;
            for(int j=n-1; j>=0; j--){
                area = max(area, matrix[i][j]*k);
                k++;
            }
        }

        return area;
        

        return area;
    }
};