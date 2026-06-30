class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        // Step 1: Store
        // Hashmap<string, vector<string>>
        // Hashmap {sorted string -> }

        // act- act, cat
        // opst- pots tops stop
        // aht - hat

        unordered_map<string, vector<string>> ump;

        // Step 2: Sorting 
        for (string s: strs) {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            ump[sortedStr].push_back(s);
        }

        // Step 3: Iterate through hashmap
        for (const auto& groups: ump) {
            ans.push_back(groups.second);
        }
        return ans;
    }
};
