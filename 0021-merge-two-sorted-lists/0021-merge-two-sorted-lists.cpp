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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *trav1,*trav2,*head,*current,*prev;
        
        
        trav1 = list1;
        prev = 0;
        head = 0;
        trav2 = list2;
        
        while(trav1 && trav2)
        {
            if(trav1->val <= trav2->val)
            {
                current = trav1;
                trav1 = trav1->next;
            }
            else
            {
                current = trav2;
                trav2 = trav2->next;
            }
            if(head == 0)
                head = current;
            if(prev)
                prev->next = current;
            prev = current;
        }
        
        while(trav1)
        {
            current = trav1;
            if(head == 0)
                head = current;
            if(prev)
                prev->next = current;
            prev = current;
            trav1 = trav1->next;
        }
        
         while(trav2)
        {
            current = trav2;
            if(head == 0)
                head = current;
            if(prev)
                prev->next = current;
            prev = current;
            trav2 = trav2->next;
        }
        
        return (head);
    }
};