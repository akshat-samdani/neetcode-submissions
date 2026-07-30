class Solution:
    # Using recursion
    # def permute(self, nums: List[int]) -> List[List[int]]:
    #     ans = []
    #     res = []
    #     self.solve(nums, res, ans)
    #     return ans

    # def solve(self, ip, op, ans):
    #     if len(ip) == 0:
    #         ans.append(op)
    #         return
        
    #     seen = set()
    #     for i in range(len(ip)):
    #         if ip[i] in seen:
    #             continue
    #         new_ip = ip[:i] + ip[i+1:]
    #         new_op = op + [ip[i]]
    #         seen.add(ip[i])
    #         self.solve(new_ip, new_op, ans)

     # Using backtracking
     # Instead of pass by value, pass by reference
     # O(n * n!) & O(1)
     # i.e time for one node * number of nodes
     def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []

        def solve(start):
            if (start == len(nums)):
                # As nums is modifed in place, while appending
                # we need to store current copy of nums
                ans.append(nums[:]) 
                return
            seen = set()
            for i in range(start, len(nums)):
                if nums[i] in seen:
                    continue
                # Swap (T shirt color change e.g)
                nums[start], nums[i] = nums[i], nums[start]
                solve(start + 1)
                # Back track (as we are passing by reference)
                nums[start], nums[i] = nums[i], nums[start]




        solve(0)
        return ans

            


            
        