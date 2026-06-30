class Solution:
    def validWordAbbreviation(self, word: str, abbr: str) -> bool:
        i = 0
        j = 0
        n = len(word)
        m = len(abbr)
        while (i < n and j < m):
            if word[i] == abbr[j]:
                i += 1
                j += 1
            elif abbr[j] == '0':
                return False
            elif abbr[j].isdigit():
                idx_skip = "" 
                while (j < m and abbr[j].isdigit()):
                    idx_skip += abbr[j]
                    j += 1
                i += int(idx_skip)
            else:
                return False
        return i == n and j == m
        