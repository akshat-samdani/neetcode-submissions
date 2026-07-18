# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # Iterative - Using two pointers
        ## O(n) & O(1)

        # prev = None
        # curr = head
        # while curr:
        #     next = curr.next
        #     curr.next = prev
        #     prev = curr
        #     curr = next
        # return prev

        # Recursive: O(n) & O(n)

        if not head:
            return head
        newHead = head
        if head.next:
            newHead = self.reverseList(head.next)
            front = head.next
            front.next = head
        head.next = None
        return newHead
