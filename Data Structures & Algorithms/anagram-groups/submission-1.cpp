class Solution {
public:
    // Using Hashmap & Encoder - O(m*n) & O(m)
    // string encoder(string s) {
    //     int count[26] = {0};
    //     string encoding = "";
    //     for (const char& c: s) {
    //         count[c - 'a']++;
    //     }

    //     for(int i = 0; i < 26; i++) {
    //         encoding += count[i];
    //     }
    //     return encoding;
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string, vector<string>> umap;
        // for (const string &str: strs) {
        //     string enc = encoder(str);
        //     umap[enc].push_back(str);
        // }

        // vector<vector<string>> ans;
        // for (const auto &keyVal: umap) {
        //     ans.push_back(keyVal.second);
        // }
        // return ans;


        // Using Sorting and Hasmap - 
        unordered_map<string, vector<string>> umap;
        for (int i = 0, m = strs.size(); i < m; i++) {
            string curr = strs[i];
            sort(strs[i].begin(), strs[i].end());
            umap[strs[i]].push_back(curr);
        }

        vector<vector<string>> ans;
        for (const auto &keyVal : umap) {
            ans.push_back(keyVal.second);
        }
        return ans;
    }
};
