/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int count(struct ListNode* head)
{
    struct ListNode* current;
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


struct ListNode* deleteMiddle(struct ListNode* head){
    
    int mid;
    
    int i;
    int size;
    struct ListNode* current,*next;
    
    size = count(head);
    mid = size / 2;
    current = head;
    
    if(mid == 0)
        return (0);
    
    i = 0;
    while(++i < mid)
        current  = current->next;
    
    next = current->next->next;
    current->next = next;
    //printf("val %i\n",current->val);
    return (head);
}