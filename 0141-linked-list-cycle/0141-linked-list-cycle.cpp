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
        int i(0);

        slow = head;
        fast = head;
        while(fast && slow)
        {
            if(fast == slow && i > 0)
                return true;
            fast = (fast->next) ? fast->next->next : 0;
            slow = slow->next;
            i++;
        }
        
        return (false);
    }
};