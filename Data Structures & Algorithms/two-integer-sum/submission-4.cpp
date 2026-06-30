class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Bruteforce - O(n^2) & O(1)
        // for (int i = 0, n = nums.size(); i < n - 1; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (target == nums[i] + nums[j]) {
        //             return {i , j};
        //         }
        //     }
        // } 
        // return {0, 0};

        // Sorting - O(nlogn) & O(nlogn)/ O(1)
        vector<pair<int, int>> vec;
        for (int i = 0, n = nums.size(); i < n; i++) {
            vec.push_back({nums[i], i});
        }
        sort(vec.begin(), vec.end());

        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            int curr = vec[i].first + vec[j].first;
            if (curr == target) {
                return {min(vec[i].second, vec[j].second),
                    max(vec[i].second, vec[j].second)};
            }
            else if (curr < target) {
                i++;
            }
            else {
                j--;
            }
        }


        // Hashmap - O(n) & O(n)
        // unordered_map<int, int> ump;
        // for (int i = 0, n = nums.size(); i < n; i++){
        //     int diff = target - nums[i];
        //     if (ump.find(diff) != ump.end()) {
        //         return {ump[diff], i};
        //     }
        //     ump[nums[i]] = i;
        // }

    }
};
