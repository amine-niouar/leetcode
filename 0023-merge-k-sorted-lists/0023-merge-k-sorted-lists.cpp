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
        int i(0),size(lists.size());
        
        ListNode * current,*head,*prev,*min;
        
        current = 0;
        prev = 0;
        head = 0;
        
        
        while(i < size)
        {
            min = get_min(lists,size,i);
            if(i == size && min == 0)
                break;
            if(min)
            {
                 current = new ListNode(min->val);
                if(head == 0)
                    head = current;
                if(prev)
                    prev->next = current;
                prev = current;
            }
           
        }
        
        if(current)
            current->next = 0;
        return (head);
    }
private:
   
    
    ListNode *get_min(vector<ListNode*>& lists,int size,int &i)
    {
        int y(-1),count(0);
        int lastmin(10000);
        int chosen;
        ListNode * current,*tail;
        
        tail = 0;
        chosen = -1;
        while(++y < size)
        {
            current = lists[y];
            if(current == 0)
                count++;
            else if(current->val <= lastmin)
            {
                lastmin = current->val;
                chosen = y;
                tail = current;
            }
        }
        
        if(count == size)
            i = size;
        
        if(chosen != -1)
        {
            if(lists[chosen]->next == 0)
                i++;
            lists[chosen] = lists[chosen]->next;
        }
            
            
        return (tail);
    }
};