/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *current,*head,*prev;
        
        int reminder(0),x1,x2,res;
        
        prev = 0;
        head = 0;
        while(l1 || l2 || reminder)
        {
            x1 = (l1) ? l1->val : 0;
            x2 = (l2) ? l2->val : 0;
            
            res = x1 + x2 + reminder;
            
            reminder = res / 10;
            current = new ListNode(res % 10);
            
            if(head == 0)
                head = current;
            if(prev)
                prev->next = current;
            prev = current;
            l1 = (l1) ? l1->next : 0;
            l2 = (l2) ? l2->next : 0;
        }
        
        current->next = 0;
        return (head);
    }
};