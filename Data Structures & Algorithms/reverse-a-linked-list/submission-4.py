# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # This approach will only reverse the DATA
        stack = []
        temp = head
        while (temp):
            stack.append(temp.val)
            temp = temp.next
        curr = head
        while (stack):
            top = stack.pop()
            curr.val = top
            curr = curr.next

        return head

        