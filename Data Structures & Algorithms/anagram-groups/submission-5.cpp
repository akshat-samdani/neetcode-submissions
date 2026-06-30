class Solution {
public:
    string uniqueKey(string s) {
        string ans;
        int arr[26] = {0};
        for (char c: s) {
            arr[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            ans += to_string(arr[i]);
            ans += "#"; // Avoid ambihuity (count 1 & 11)
        }
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<vector<string>> ans;

        // Step 1: Store
        // Hashmap<string, vector<string>>
        // Hashmap {sorted string -> }

        // act- act, cat
        // opst- pots tops stop
        // aht - hat

        // unordered_map<string, vector<string>> ump;

        // // Step 2: Sorting 
        // for (string s: strs) {
        //     string sortedStr = s;
        //     sort(sortedStr.begin(), sortedStr.end());
        //     ump[sortedStr].push_back(s);
        // }

        // // Step 3: Iterate through hashmap
        // for (const auto& groups: ump) {
        //     ans.push_back(groups.second);
        // }
        // return ans;

        // Approach 2:
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> ump;

        for (string s: strs) {
           string key = uniqueKey(s);
           ump[key].push_back(s);
        }

        for (const auto& groups: ump) {
            ans.push_back(groups.second);
        }
        return ans;
    }
};
