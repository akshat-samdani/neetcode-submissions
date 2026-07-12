class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        in_out = [[0, 0] for _ in range(n + 1)]

        for a,b in trust:
            in_out[a][1] += 1
            in_out[b][0] += 1
        
        for i in range(1, n + 1):
            if (in_out[i][0] == n - 1 and in_out[i][1] == 0):
                return i
        return -1
             
        