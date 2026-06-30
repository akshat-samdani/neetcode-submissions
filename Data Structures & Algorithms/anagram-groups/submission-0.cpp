class Solution {
public:
    string encoder(string s) {
        int count[26] = {0};
        string encoding = "";
        for (const char& c: s) {
            count[c - 'a']++;
        }

        for(int i = 0; i < 26; i++) {
            encoding += count[i];
        }
        return encoding;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;
        for (const string &str: strs) {
            string enc = encoder(str);
            umap[enc].push_back(str);
        }

        vector<vector<string>> ans;
        for (const auto &keyVal: umap) {
            ans.push_back(keyVal.second);
        }
        return ans;


    }
};
