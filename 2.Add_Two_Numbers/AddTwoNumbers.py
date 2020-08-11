# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        result = ListNode(0)
        temp = result
        carry = 0
        
        while l1 or l2 or carry:
            a = l1.val if l1 else 0
            b = l2.val if l2 else 0
            
            c = a + b + carry
            sm, carry = c % 10, c // 10
            
            temp.next = ListNode(sm)
            temp = temp.next
            
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        
        return result.next
