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
    ListNode* insertionSortList(ListNode* head) {
        
        vector<int> vec;
        ListNode* current;
        int i(-1);
        current = head;
        while(current)
        {
            vec.push_back(current->val);
            current = current->next;
        }
        
        sort(vec.begin(),vec.end());
        
        current = head;
        while(current)
        {
             current->val = vec[++i];
             current = current->next;
        }
        
        return (head);
    }
};