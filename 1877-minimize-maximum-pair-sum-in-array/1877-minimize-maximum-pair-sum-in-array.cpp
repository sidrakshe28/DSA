class Solution {
public:
    int minPairSum(vector<int>& v) {
        int ans = 0, i =  1, j = 0;
        unordered_map<int, int> mp;
        for(auto it:v) mp[it]++, j = max(it,j);
        while(i<=j){
            if(mp[i] and mp[j]) mp[i]--, mp[j]--, ans = max(ans, i + j);
            if(!mp[i]) i++;
            if(!mp[j]) j--;
        }
        return ans;
    }
};