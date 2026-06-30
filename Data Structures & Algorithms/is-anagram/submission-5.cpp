class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1. Sorting - O(nlogn + mlogm) & O(1)
        if (s.length() != t.length()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
