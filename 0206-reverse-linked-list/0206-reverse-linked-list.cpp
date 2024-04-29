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
private:
    void reverse(ListNode* &head, ListNode* &prev){
        if(head == NULL)
            return;
        ListNode* curt = head;
        ListNode* forward;
        if(curt != NULL){
            forward = curt->next;
            curt->next = prev;
            prev = curt;
            curt = forward;
        }
        reverse(forward, prev);
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        reverse(head, prev);
        
        return prev;
    }
};