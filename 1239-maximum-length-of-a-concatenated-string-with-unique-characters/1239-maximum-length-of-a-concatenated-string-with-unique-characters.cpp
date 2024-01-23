class Solution {
public:
    bool isUnique(const string& str) {
        unordered_set<char> charSet;
        for (char ch : str) {
            if (charSet.count(ch) > 0) {
                return false;
            }
            charSet.insert(ch);
        }
        return true;
    }

    void unique(const vector<string>& arr, int k, string current, int& maximum) {
        if (!isUnique(current)) {
            return;
        }

        maximum = max(maximum, static_cast<int>(current.size()));

        for (int i = k; i < arr.size(); ++i) {
            unique(arr, i + 1, current + arr[i], maximum);
        }
    }

    int maxLength(vector<string>& arr) {
        int maximum = 0;
        string current = "";

        unique(arr, 0, current, maximum);

        return maximum;
    }
};
