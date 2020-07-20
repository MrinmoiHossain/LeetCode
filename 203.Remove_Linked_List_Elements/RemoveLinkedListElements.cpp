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
    ListNode* removeElements(ListNode* head, int val) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        while(head != NULL && head->val == val)
            head = head->next;
        
        if(!head)
            return head;
        
        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL){
            if(curr->next->val == val){
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
            }
        }
        
        return head;
    }
};