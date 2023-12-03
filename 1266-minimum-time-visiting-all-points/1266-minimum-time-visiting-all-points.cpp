class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for(int i = 1 ; i < points.size() ; i++){
            int a1 = points[i-1][0];
            int b1 = points[i-1][1];
            int a2 = points[i][0];
            int b2 = points[i][1];
            ans+=abs(a2-a1)+abs(b2-b1);
            if(abs(a2-a1) < abs(b2-b1)){
                ans-=abs(a2-a1);
            }
            else ans-=abs(b2-b1);
        }
        return ans;
    }
};