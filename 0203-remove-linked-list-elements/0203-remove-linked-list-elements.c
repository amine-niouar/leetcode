/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    
    struct ListNode *prev,*current;
    int match;
    
    current = head;
    prev = 0;
    
    while(current)
    {
        match = 0;
        if(current->val == val)
        {
            if(prev == 0)
            {
                head = current->next;
                //current = current->next;
            }
            else
            {
                prev->next = current->next;
            }
            match = 1;
        }
        if(!match)
            prev = current;
        current = current->next;
    }
    return (head);

}