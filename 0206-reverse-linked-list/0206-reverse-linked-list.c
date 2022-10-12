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
    int i;
    
    i = 0;
    current = head;
    while(current)
    {
        i++;
        current = current->next;
    }
    return (i);
}

struct ListNode* get_node(struct ListNode* head, int pos)
{
    struct ListNode* current;
    int i;
    
    i = 0;
    current = head;
     while(current)
    {
        if(pos == i)
            return (current);
        i++;
        current = current->next;
    }
    return (0);
}

void swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
}

struct ListNode* reverseList(struct ListNode* head){
    
    int i;
    struct ListNode* current;
     struct ListNode* currentPos;
    int size;
    int rev;
    
    current = head;
    size = count(head);
    rev = size - 1;
    i = 0;
    while (i < (size / 2))
    {
        currentPos = get_node(head,rev);
        swap(&currentPos->val,&current->val);
        rev--;
        i++;
        current = current->next;
    }
    return (head);
}