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

  
    ListNode* sortList(ListNode* head) {
        
        ListNode *current,*res,*prev,*new_curr;
        int i(0);
        vector<int> vec_list;

        res = 0;
        new_curr = 0;
        prev = 0;
        current = head;
        while(current)
        {
            vec_list.push_back(current->val);
            current = current->next;
        }
        sort(vec_list.begin(),vec_list.end());
        current = head;
        while(current)
        {
            new_curr = new ListNode;
            new_curr->val = vec_list[i++];
            if(res == 0)
                res = new_curr;
            if (prev)
                prev->next = new_curr;
            prev = new_curr;
            current = current->next;
        }
        if (new_curr)
            new_curr->next = 0;
        return (res);
    }
};