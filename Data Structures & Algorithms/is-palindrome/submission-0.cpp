class Solution {
public:
    bool isPalindrome(string s) {
        /* Two pointers - O(n) & O(1) */

        // Cleanify input
        string cleanedStr = "";
        for (char c : s) {
            if (isalnum((unsigned char)c)) { // Checks if it's A-Z, a-z, or 0-9
                cleanedStr += tolower((unsigned char)c);
            }
        }

        int n = cleanedStr.size();
        int left = 0, right = n - 1;
        while (left < right) {
            if(cleanedStr[left] != cleanedStr[right]) {
                return false;
            }
            left += 1;
            right -= 1;
        }
        return true;
        
    }
};
