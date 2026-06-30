class Solution {
public:
    int characterReplacement(string s, int k) {
        // Logic If have substring of lenght l and 
        // we know the maximum occuring char in that substring 
        // then if remaining char l - m <= k then 
        // that is valid answer and we need to find max of all answers

        int left = 0, right = 0;
        int ans = 0;
        int count[26] = {0};
        int maxFreq = 0;
        int n = s.size();
        while (right < n) {
            int idxR = s[right] - 'A';
            count[idxR]++;
            maxFreq = max(maxFreq, count[idxR]);
            int subLen = right - left + 1;
            if (subLen - maxFreq > k) {
                int idxL = s[left] - 'A';
                count[idxL]--;
                left++;
            }
            else {
                ans = max(ans, subLen);
            }
            right++;
        }
        return ans;
    }
};
