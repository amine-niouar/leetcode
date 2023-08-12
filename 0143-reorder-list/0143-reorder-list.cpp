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
    void reorderList(ListNode* head) {
        ListNode *slow,*fast,*prev,*first,*second,*next,*tmp1,*tmp2;
        
        slow = head;
        fast = head->next;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        second = slow->next;
        slow->next = 0;
        prev = 0;
        
        while(second)
        {
            next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }
        
        first = head;
        second = prev;
        
        while(second)
        {
            tmp1 = first->next;
            tmp2 = second->next;
            
            first->next = second;
            second->next = tmp1;
            first = tmp1;
            second = tmp2;
        }
        
    }
};