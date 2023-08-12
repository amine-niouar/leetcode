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
        
        ListNode *trav1,*trav2,*head,*current;
        
        
        trav1 = list1;
        head = 0;
        trav2 = list2;
        
        if(list1 == 0 && list2 == 0)
            return NULL;
        
        if(list1 == 0)
            return list2;
        if(list2 == 0)
            return list1;
        
         if(trav1->val <= trav2->val)
            {
                head = trav1;             
                trav1 = trav1->next;
            }
            else
            {
                head = trav2;
                trav2 = trav2->next;
            }
        
       
        current = head;
        
        while(trav1 && trav2)
        {
            if(trav1->val <= trav2->val)
            {
                current->next = trav1;                
                trav1 = trav1->next;
            }
            else
            {
                current->next = trav2;
                trav2 = trav2->next;
            }
            current = current->next;
        }
        
        if(trav1)
            current->next = trav1;
        
        if(trav2)
            current->next = trav2;
       
        return (head);
    }
};