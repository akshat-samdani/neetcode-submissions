class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int right = 0;
        int longSub = 0;
        unordered_set<char> seen;
        while (right < n) {
            // Shrink the window from the left until the duplicate is removed.
            while (seen.count(s[right]) > 0) {
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            longSub = max(longSub, right - left + 1);
            right++;
        }
        return longSub;
    }
};
