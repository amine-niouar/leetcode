/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    
    struct ListNode* prev,*current,*next;
    
    prev = 0;
    current = head;
    while(current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
   
    return (prev);
}