class Solution {
public:
    bool isAnagram(string s, string t) {
        // Using Sorting - O(nlogn + mlogm) & O(1)
        if (s.size() != t.size())
            return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
