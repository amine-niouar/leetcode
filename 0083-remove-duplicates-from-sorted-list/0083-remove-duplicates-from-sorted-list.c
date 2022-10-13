/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    
    struct ListNode* current;
    struct ListNode* checker;
    struct ListNode* next;
    int i;
    current = head;
    
    
    while(current)
    {
        checker = current->next;
        next = current->next;
        i = 0;
        while(checker)
        {
                if(current->val != checker->val)
                        break;
                checker = checker->next;
            i++;
        }
        if(i > 0)
            current->next = checker;
        else
            current = next;
    }
    return (head);
}