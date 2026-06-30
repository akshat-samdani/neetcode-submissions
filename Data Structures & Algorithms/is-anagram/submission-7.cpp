class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1. Sorting - O(nlogn + mlogm) & O(1)
        // if (s.length() != t.length()) return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;


        // 2. Using hashmaps - O(n + m) & O(1) (Only 26 chars)
        // if (s.length() != t.length()) return false;
        // unordered_map<char, int> countS;
        // unordered_map<char, int> countT;
        // for (int i = 0, n = s.length(); i < n; i++) {
        //     countS[s[i]]++;
        //     countT[t[i]]++;
        // }
        // return countS == countT;


        // 3. Using Arrays - O(n + m) & O(1)
        if (s.length() != t.length()) return false;

        int count[26] = {0};
        for (int i = 0, n = s.length(); i < n; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }
        return true;
        
    }
};
