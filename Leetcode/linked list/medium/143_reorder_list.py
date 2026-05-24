# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:

        slow = fast = head
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next  

        first = head
        second = slow.next
        slow.next = None

        prev = None
        while second:
            next_node = second.next
            second.next = prev
            prev = second
            second = next_node
        
        # prev is head of reversed half
        # head is head of 

        current = head
        head = head.next
        turn = False
        while head and prev:
            if turn:
                current.next = head
                head = head.next
            else:
                current.next = prev
                prev = prev.next

            current = current.next
            turn = not turn
        
        current.next = prev if prev else head


        

        

        

            
        