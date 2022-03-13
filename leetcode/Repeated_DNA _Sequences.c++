class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
            if(s.length()  < 10) // the DNA sequence can not occur more than once.
            return {};
        unordered_set<string> subSequences; // store DNA sequences
        unordered_set<string> visited; // check if sequence has visited 
        vector<string> answer; // store all sequences the  that occur more than once
        int subLength = 10, n = s.length() - 9;
        for(int i = 0; i < n;  i++){
            string sub = s.substr(i, subLength);
            // if the DNA sequence occur more than once and has not checked before
            if(subSequences.find(sub) != subSequences.end() 
               && visited.find(sub) == visited.end()){
                answer.push_back(sub);
                visited.insert(sub);
            }//end if
            else
                subSequences.insert(sub);
        }//end for
        return answer;
    }
};
