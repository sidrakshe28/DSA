class Solution {
public:
    bool check(vector<int>&a){
        sort(a.begin(),a.end());
        int dif=a[1]-a[0];
        for(int i=2;i<a.size();i++){
            if(a[i]-a[i-1]!=dif){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>res;
        for(int i=0;i<l.size();i++){
            vector<int>a(begin(nums)+l[i],begin(nums)+r[i]+1);
            res.push_back(check(a));
        }
        return res;
    }
};