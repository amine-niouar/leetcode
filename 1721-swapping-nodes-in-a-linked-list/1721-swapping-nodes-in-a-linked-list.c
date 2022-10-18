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

void swap(int *a,int *b)
{
    int c;
    
   
    c = *a;
     *a = *b;
    *b = c;
}

struct ListNode* swapNodes(struct ListNode* head, int k){
    
    int size;
    int mid;
    int i;
    struct ListNode* current,*k1,*k2;
    
    size = count(head);
    current = head;
    mid = size / 2;
    
    k1 = 0;
    k2 = 0;

    i = 0;
    
    while(current)
    {
        if(i == (k-1))
            k1 = current;
        if(i == (size - k))
            k2 = current;
        i++;
        current = current->next;
    }
    if(k1 && k2)
        swap(&k1->val,&k2->val);
    //printf("%i %i\n",k1->val,k2->val);
    return (head);
}