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
      Node* curr = head;
        unordered_map<Node*, Node*> m;
        Node* result = new Node(0);
        Node* tmp = result;
        while (curr) {
            if (m.find(curr) == m.end()) {
                m[curr] = new Node(curr->val);
            }
            tmp->next = m[curr];
            tmp = tmp->next;
            curr = curr->next;
        }
        curr = head;
        while (curr) {
            if (curr->random != nullptr) {
                m[curr]->random = m[curr->random];
            }
            curr = curr->next;
        }
        return result->next;   
        
    }
};