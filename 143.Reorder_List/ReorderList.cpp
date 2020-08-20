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
    void reorderList(ListNode* head) {
        if(head == NULL)
            return;
        
        stack<ListNode* > s;
        ListNode* curr = head;
        while(curr != NULL){
            s.push(curr);
            curr = curr->next;
        }
        
        curr = head;
        int n = s.size();
        int mid = (n - 1) / 2;
        ListNode* temp;
        
        for(int i = 0; i < mid; ++i){
            temp = s.top();
            s.pop();
            
            temp->next = curr->next;
            curr = curr->next = temp;
            curr = curr->next;
        }
        
        if(n % 2 == 1)
            curr->next = nullptr;
        else
            curr->next->next = nullptr;
    }
};