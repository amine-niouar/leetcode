/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    
    struct ListNode* current,*prev,*next,*doubleprev;
    int i,last;

    doubleprev = 0;
    last = 0;
    i = 0;
    current = head;
    while(current)
    {
        i++;
        if(i % 2 == 0)
        {
            if(i == 2)
                head = current;
            if(doubleprev)
               doubleprev->next = current;
            // next = 0  4->3
            next = current->next;
            current->next = prev;
            prev->next = next;
            current = prev;
            doubleprev = prev;
        }
        else
             prev = current;
        current = current->next;
    }
    
    return (head);

}