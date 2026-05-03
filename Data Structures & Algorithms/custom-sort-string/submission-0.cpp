class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }
        string res;
        for (char c : order) {
            int idx = c - 'a';
            while (count[idx] > 0) {
                res += c;
                count[idx]--;
            }
        }
        for (int idx = 0; idx < 26; ++idx) {
            char c = 'a' + idx;
            while (count[idx] > 0) {
                res += c;
                count[idx]--;
            }
        }
        return res;
    }
};