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

        unordered_map<int, int> ump;
        for (int i = 0, n = nums.size(); i < n; i++){
            int diff = target - nums[i];
            if (ump.find(diff) != ump.end()) {
                return {ump[diff], i};
            }
            ump[nums[i]] = i;
        }
  

    }
};
