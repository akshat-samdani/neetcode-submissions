class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n = s.size();
        // int left = 0;
        // int right = 0;
        // int longSub = 0;
        // unordered_set<char> seen;
        // while (right < n) {
        //     // Shrink the window from the left until the duplicate is removed.
        //     while (seen.count(s[right]) > 0) {
        //         seen.erase(s[left]);
        //         left++;
        //     }
        //     seen.insert(s[right]);
        //     longSub = max(longSub, right - left + 1);
        //     right++;
        // }
        // return longSub;

        /* Sliding Window(Optimal) - O(n) & O(m) */
        /* Instead of removing characters one by one when we see a repeat,
         we can jump the left pointer directly to the correct position. */
        
        // unordered_map<char, int> mp;
        // int n = s.size();
        // int left;
        // int ans = 0;

        // for (int right = 0; right < n; right++) {
        //     // Found a duplicate
        //     if (mp.find(s[right]) != mp.end()) {
        //         // Move left to after the duplicate
        //         left = max(mp[s[right]] + 1, left);
        //     }
        //     mp[s[right]] = right;
        //     ans = max(ans, right - left + 1);
        // }
        // return ans;

        unordered_map<char, int> mp;
        int l = 0, res = 0;

        for (int r = 0; r < s.size(); r++) {
            if (mp.find(s[r]) != mp.end()) {
                l = max(mp[s[r]] + 1, l);
            }
            mp[s[r]] = r;
            res = max(res, r - l + 1);
        }
        return res;
    }
};
