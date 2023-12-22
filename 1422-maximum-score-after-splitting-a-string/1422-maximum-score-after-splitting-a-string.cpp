class Solution {
public:
    int maxScore(string s) {
        int zerosOnLeft = 0;
        int onesOnRight = count(s.begin(), s.end(), '1');
        int maxScore = 0;

        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] == '0') {
                zerosOnLeft++;
            } else {
                onesOnRight--;
            }

            int score = zerosOnLeft + onesOnRight;
            maxScore = max(maxScore, score);
        }

        return maxScore;
    }
};