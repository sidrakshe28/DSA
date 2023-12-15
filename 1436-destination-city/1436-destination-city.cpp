class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        set<string> st;
        for(int i{0};i<n;i++){
            st.insert(paths[i][0]);
        }
        string ans="";
        for(int i{0};i<n;i++){
            if(st.find(paths[i][1])==st.end()){
                ans = paths[i][1];
            }
        }
        return ans;
    }
};