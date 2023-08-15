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
    ListNode* reverseKGroup(ListNode* head, int k) {
      ListNode *dummy,*prev,*curr,*tmp,*end;
      int count(k);
      
      dummy = new ListNode();
      dummy->next = head;
      prev = dummy;
      curr = dummy->next;
      tmp = 0;
      
      while(curr)
      {
          if(count > 1)
          {
             tmp = prev->next;
             prev->next = curr->next;
             curr->next = curr->next->next;
             prev->next->next = tmp;
             
             count--;
          }
          else
          {
              prev = curr;
              curr = curr->next;
              count = k;
            
              end = curr;
              for(int i = 0; i < k; i++)
              {
                  if(end == 0)
                    return dummy->next;
                  end = end->next;
              }
          }
      }
      return dummy->next;
    }
};