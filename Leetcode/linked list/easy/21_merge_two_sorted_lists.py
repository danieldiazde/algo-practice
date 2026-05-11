# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head1 = list1
        head2 = list2

        if head1 and head2:
            if head1.val <= head2.val:
                dummy = head1
                head1 = head1.next
            else:
                dummy = head2
                head2 = head2.next
        elif head1:
            return head1
        elif head2:
            return head2
        else:
            return None

        parent_node = dummy

        while head1 and  head2:
            if head1.val <= head2.val:
                dummy.next = head1
                dummy = head1
                head1 = head1.next
            else:
                dummy.next = head2
                dummy = head2
                head2 = head2.next
        
        while head1:
            dummy.next = head1
            dummy = head1
            head1 = head1.next
        
        while head2:
            dummy.next = head2
            dummy = head2
            head2 = head2.next
       # 1 -> 2 -> 4

       # 3 -> 4 -> 5


       # 

        

        

            

                
        
        return parent_node
            



        