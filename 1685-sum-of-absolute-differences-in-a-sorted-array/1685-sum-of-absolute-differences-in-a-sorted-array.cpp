class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& a) {
        vector<int> ans;
        long long sm=0;int n=a.size();
        for(int i=1;i<n;i++){
            sm+=a[i]-a[0];
        }
            ans.push_back(sm);//first element
        for(int i=1;i<n;i++){
            sm-=max((n-i),0)*(a[i]-a[i-1]);//subtract
            sm+=(i)*(a[i]-a[i-1]);//add
            ans.push_back(sm);//push result

            
        }
        return ans;
        

    }
};