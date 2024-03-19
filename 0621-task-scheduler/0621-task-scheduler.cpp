class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int tn=tasks.size();
        int arr[26]={0};
        for(auto e: tasks){
            arr[e-65]++;
        }
        int mx=0;
        for(int i=0; i<26; i++){
            mx = max(mx, arr[i]);
        }

        int cnt=0;
        for(int i=0; i<26; i++){
            if (arr[i]==mx){
                cnt++;
            }
        }

        return max((mx-1)*(n+1) +cnt, tn);
    }
};