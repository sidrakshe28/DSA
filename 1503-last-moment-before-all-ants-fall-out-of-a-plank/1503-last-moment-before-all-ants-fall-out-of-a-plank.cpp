class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for(int i=0;i<left.size();i++) // you can also use for-each loop like " for(int i : left) "
            ans=max(ans,(abs(0-left[i])));  
        for(int i=0;i<right.size();i++)
            ans=max(ans,abs(n-right[i]));        
        return ans;        
    }
};