class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        for (const int& num: nums) {
            umap[num]++;
        }

        vector<pair<int, int>> vec;
        for (const auto& keyVal : umap) {
            vec.push_back({keyVal.second, keyVal.first});
        }

        sort(vec.rbegin(), vec.rend());

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};
