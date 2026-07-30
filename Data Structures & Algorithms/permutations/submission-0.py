class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []
        res = []
        self.solve(nums, res, ans)
        return ans

    def solve(self, ip, op, ans):
        if len(ip) == 0:
            ans.append(op)
            return
        
        seen = set()
        for i in range(len(ip)):
            if ip[i] in seen:
                continue
            new_ip = ip[:i] + ip[i+1:]
            new_op = op + [ip[i]]
            seen.add(ip[i])
            self.solve(new_ip, new_op, ans)
            


            
        