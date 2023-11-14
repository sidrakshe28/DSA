class Solution {
public:
    int noOfUnique(string& s,int mn,int mx){
        unordered_map<char,int> mp;
        for(int i=mn+1;i<mx;i++){
            mp[s[i]]=1;
        }
        return mp.size();
    }
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        unordered_map<char,pair<int,int>> mp;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]] = {i,i};
            }else{
                int mn = mp[s[i]].second;
                mp[s[i]] = {i,mn};
            }
        }
        int ans=0;
        for(auto ele:mp){
            if(ele.second.first - ele.second.second>=2){
                int mn = ele.second.second;
                int mx = ele.second.first;
                ans+=noOfUnique(s,mn,mx);
            }
        }
        return ans;
    }
};