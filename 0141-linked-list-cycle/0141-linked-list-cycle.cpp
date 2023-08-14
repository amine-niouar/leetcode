/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast,*slow;
        
        if(head == 0)
            return (false);
    

        slow = head;
        fast = head;
        while(fast->next != 0 && fast->next->next != 0)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                return (true);
        }
        
        return (false);
    }
};