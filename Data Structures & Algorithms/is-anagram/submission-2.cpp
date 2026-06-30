class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1.Using Sorting - O(nlogn + mlogm) & O(1)
        // if (s.size() != t.size())
        //     return false;
        
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return s == t;

        // 2.Using Hashmap - O(s) & O(s)
        // if (s.size() != t.size()) 
        //     return false;
        
        // unordered_map<int, int> smap;
        // unordered_map<int, int> tmap;
        // for (int i = 0, n = s.size(); i < n; i++) {
        //     smap[s[i] - 'a']++;
        //     tmap[t[i] - 'a']++;
        // } 
        // return smap == tmap;

        // 3. Using Array - O(s) & O(1)
        if (s.size() != t.size())
            return false;

        int arr[26] = {0};
        for (int i = 0, n = s.size(); i < n; i++) {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0)
                return false;
        }
        return true;
    }
};
