class Solution {
public:
    bool isAnagram(string s, string t) {

        // Approach 1 - Hashmap O(s+t) & O(s)
        // Base condition
        if (s.size() != t.size())
            return false;
        
        // Map {char, count}
        // racecar 
        // r - 2
        // a - 2
        // c - 2
        // e - 1
    
        
        // carrace
        // c - 0
        // a - 0
        // r - 0
        // e - 0

        // unordered_map<char, int> um;
        // for (char c : s) {
        //     um[c]++;
        // }

        // for (char c: t) {
        //     um[c]--;
        //     if (um[c] == 0)
        //         um.erase(c);
        // }
        // return um.empty();

        // Approach 2 - Arrays O(s+t) & O(1)
        // s -> number of chars in s
        // t -> number of chars in t
        int arr[26] = {0};

        for (char c : s) {
            arr[c - 'a']++;
        }

        for (char c : t) {
            arr[c - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0) 
                return false;
        }
        return true;

        // Approach 3 - Sorting O(slogs + tlogt) & O(1) or O(s+t)
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;

    }
};
