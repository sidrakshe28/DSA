#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& ga, vector<int>& ta) {
        int res = 0, n = ga.size(), m = -1, p = -1, g = -1;
        for (int i = 0; i < n; i++) {
            string s = ga[i];
            res += s.size();
            if (s.find('M') != string::npos) m = max(m, i);
            if (s.find('P') != string::npos) p = max(p, i);
            if (s.find('G') != string::npos) g = max(g, i);
        }
        for (int i = 0; i < n - 1; i++) {
            if (i < m) res += ta[i];
            if (i < p) res += ta[i];
            if (i < g) res += ta[i];
        }
        return res;
    }
};
