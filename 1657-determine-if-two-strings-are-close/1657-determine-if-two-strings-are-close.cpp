class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) return false;
        unordered_map<char,int> m1,m2;
        for(int i=0;i<word1.length();i++){
            m1[word1[i]]++;
            m2[word2[i]]++;
        }
        string s1="",s2="";
        for(auto &it:m1){
            s1+=to_string(it.second);
            s1+=it.first;
        }
        for(auto &it:m2){
            s2+=to_string(it.second);
            s2+=it.first;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }
};