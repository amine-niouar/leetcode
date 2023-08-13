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
        ListNode *current,*prev;
        int counter(0),pos,i(0);
        
        current = head;
        while(current)
        {
            counter++;
            current = current->next;
        }
        
        pos = counter - n;
        current = head;
        while(current)
        {
            
            if(i == pos)
            {
                if(i == 0)
                    head = current->next;
                else
                     prev->next = current->next;
            }
                
            i++;
            prev = current;
            current = current->next;
        }
        
        return (head);
    }
};