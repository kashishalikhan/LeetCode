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
    ListNode* reverseList(ListNode* head) {
        ListNode * pre = NULL, * nxt = NULL;
        ListNode * curt = head;
        while(curt != NULL){
            nxt = curt -> next;
            curt -> next = pre;
            pre = curt;
            curt = nxt;
        }
        head = pre;
        return head;
    }
};