class Solution {
public:
    string reverseWords(string s) {
    string result;
    int i = 0;
    int n = s.length();

    while(i < n){
        while(i < n && s[i] == ' ') i++;//iterate till we get the letter(bascially saare spaces count karega,letter aya toh j pe jaayega)
        if(i >= n) break;
        int j = i + 1;
        while(j < n && s[j] != ' ') j++;//iterate till all letters in words are covered.
        string sub = s.substr(i, j-i);//add it to a substring.
        if(result.length() == 0) result = sub;//if result is empty phele se add sub to it diireclty
        else result = sub + " " + result;//if result is not empty ,add the word to it
        i = j+1;
    }
    return result;
}
};
