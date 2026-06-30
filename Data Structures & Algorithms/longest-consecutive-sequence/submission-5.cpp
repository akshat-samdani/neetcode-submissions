class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Identify the beginning of the sequence
        // If in middle skip

        unordered_set<int> uset(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;

        for (int num: uset) {
            if (uset.count(num - 1)) {
                continue;
            }
            int curr = 1;
            int next = num + 1;
            while (uset.find(next) != uset.end()) {
                curr++;
                next++;
                
            }
            ans = max(ans, curr);
        }
        return ans;
        
    }
};
