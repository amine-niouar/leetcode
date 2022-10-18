/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int count(struct ListNode* head)
{
    struct ListNode *current;
    int c;
    
    c = 0;
    current = head;
    
    while(current)
    {
        c++;
        current = current->next;
    }
    return (c);
}


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    
    int size;
    int point,i;
    struct ListNode *current;
    
    current = head;
    size = count(head);
    point = size - n;
    i = 0;
    while(++i < point)
        current = current->next;
    if(point == 0)
        return (current->next);
    if(current->next)
        current->next = current->next->next;
 
    
    
    return (head);
}