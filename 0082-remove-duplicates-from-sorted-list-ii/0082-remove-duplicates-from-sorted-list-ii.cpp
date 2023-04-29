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
    ListNode* deleteDuplicates(ListNode* head) {
        
        vector <int> nums;
        vector <int> new_nums;
        int i(-1);
        ListNode *nhead,*prev;
        
        ListNode* cur = head;
        
        while(cur)
        {
            nums.push_back(cur->val);
            cur = cur->next;
        }
        
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int x;
        while(++i < size)
        {
            x = 0;
           
            if(i+1 < size)
            {
                 while(nums[i] == nums[i+1])
                {
                    x++;
                    i++;
                    if(i+1 >= size)
                         break;
                }
                
            }
           
          
            
             if(x == 0 && i < size)
            {
                new_nums.push_back(nums[i]);
            }
                
            
        }
        
        size = new_nums.size();
        nhead = 0;
        prev = 0;
        cur = 0;
        x = -1;
        while(++x  < size)
        {
            cur = new ListNode;
            cur->val = new_nums[x];
            if(nhead == 0)
                nhead = cur;
            if(prev)
                prev->next = cur;
            prev = cur;
        }
        if(cur)
            cur->next = 0;
           
        return (nhead);
    }
};