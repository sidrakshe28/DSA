class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        
        // Create a vector of pairs to store row strength and index
        vector<pair<int, int>> strength;
        
        // Calculate the strength of each row and store it with its index
        for (int i = 0; i < m; i++) {
            int sum = accumulate(mat[i].begin(), mat[i].end(), 0);
            strength.push_back({sum, i});
        }
        
        // Sort the vector based on strength and index
        sort(strength.begin(), strength.end());
        
        // Extract the first k indices
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(strength[i].second);
        }
        
        return result;
    }
};