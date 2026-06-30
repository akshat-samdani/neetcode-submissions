class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Identify the beginning of the sequence

        unordered_set<int> uset(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;

        for (int num: uset) {
            int curr = 1;
            int prev = num - 1;
            while (uset.find(prev) != uset.end()) {
                curr++;
                prev--;
                
            }
            ans = max(ans, curr);
            uset.insert(num);
        }
        return ans;
        
    }
};
