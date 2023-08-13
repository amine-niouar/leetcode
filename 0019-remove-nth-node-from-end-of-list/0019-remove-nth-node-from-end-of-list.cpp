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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *left,*right;
        int i(-1);
       
        if(head->next == 0)
            return (0);
        
        left = head;
        right = head;
        
        while(++i < n && right)
            right = right->next;
        
        if(right == 0)
            return head->next;
        
        while(right->next != 0)
        {
            left = left->next;
            right = right->next;
        }
        left->next = left->next->next;
        return (head);
    }
};