/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       
        unordered_map<Node *,Node *> originalCopy;
        Node *current,*copy;
        
        originalCopy[0] = 0;
        current = head;
        while(current)
        {
            copy = new Node(current->val);
            originalCopy[current] = copy;
            current = current->next;
        }
        
        current = head;
        while(current)
        {
            copy = originalCopy[current];
            copy->next = originalCopy[current->next];
            copy->random = originalCopy[current->random];
            current = current->next;
        }
        
        return originalCopy[head];
    }
};