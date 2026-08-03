# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        # My soln:
        # visited = {}
        # node = head

        # while node != None:
        #     if visited.get(node):
        #         return True
        #     visited[node] = 1
        #     node = node.next

        # return False

        slow = head
        fast = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                return True

        return False