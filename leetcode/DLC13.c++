class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
         vector<int> ans;
        vector<int>::iterator it;int i =0;
        for(it=nums.begin();it!=nums.end();it++)
        {
            ans.insert(ans.begin()+index[i],*it);
            i++;
        }
        
        return ans;
    }
};
