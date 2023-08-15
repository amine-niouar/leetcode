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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n(lists.size());
        
        if(n == 0)
            return (0);
        
        while(n > 1)
        {
            for(int i = 0; i < n / 2;i++)
                lists[i] = mergeTwoLists(lists[i],lists[n-i-1]);
            n = (n + 1) / 2;
        }
                                         
        return lists[0];               
    }
private:
   ListNode * mergeTwoLists(ListNode *l1,ListNode *l2)
   {
      if(l1 == 0 && l2 == 0)
            return (0);
      if(l1 == 0)
          return (l2);
      if(l2 == 0)
          return (l1);
      
      ListNode *head = 0;
     
      if(l1->val <= l2->val)
      {
          head = l1;
          l1 = l1->next;
      }
      else
      {
          head = l2;
          l2 = l2->next;
      }
      
      ListNode *current = head;
      
      while(l1 != 0 && l2 != 0)
      {
           if(l1->val <= l2->val)
           {
               current->next = l1;
               l1 = l1->next;
           }
           else
           {
               current->next = l2;
               l2 = l2->next;
           }
           current = current->next;
      }
      
     if(l1 == 0)
          current->next = l2;
     else
          current->next = l1;
     return (head);
   }                     
};