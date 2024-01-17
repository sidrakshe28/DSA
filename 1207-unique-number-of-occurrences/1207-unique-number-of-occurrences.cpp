class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> st;
        
        for(auto i: arr) mp[i]++;
        for(auto i: mp) st.insert(i.second);
        
        if(mp.size()==st.size()) return true;
        
        else return false;
    }
};