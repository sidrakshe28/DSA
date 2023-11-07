class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        for(int i = 0; i < n; i++){
            dist[i] = ceil(dist[i] / (double)speed[i]);
        }
        sort(dist.begin(), dist.end());
        
        int i = 0;
        for(int j = 0; j < n; j++){
            if(i >= dist[j]){
                return i;
            }
            i++;
        }

        return n;
    }
};