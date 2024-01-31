class Solution {
public:
    int minSteps(string s, string t) {
        int tong[26]={0},ans=0;
        for(auto c:s) tong[c-'a']++;
        for(auto c:t) tong[c-'a']--;
        for(auto a:tong) if(a>0) ans+=a;
        return ans;
    }
};