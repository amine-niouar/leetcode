/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <math.h>
int pow_head(struct ListNode* head)
{
    int count;
    
    count = 0;
    while(head)
    {
        count++;
        head = head->next;
    }
    return (count);
}


int getDecimalValue(struct ListNode* head){
    int powValue;
    int r;
    struct ListNode* current;
    
    r = 0;
    current = head;
    powValue = pow_head(head);
    powValue -= 1;
    while(current)
    {
        r += current->val * (int)pow(2,powValue);
        powValue--;
        current = current->next;
    }
    return (r);
}