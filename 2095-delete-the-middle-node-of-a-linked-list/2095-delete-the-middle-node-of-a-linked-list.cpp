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
    ListNode* deleteMiddle(ListNode* head) {
        
        int len = 0;
        ListNode* curr = head;
        while(curr != NULL){
            len++;
            curr = curr -> next;
        }
        if(len == 1) return NULL;
        int mid = len/2;
        curr = head;
        int i = 0;
        while(i != mid-1){
            i++;
            curr = curr -> next;
        }
        ListNode* temp = curr ->next;
        curr -> next = temp ->next;
        delete(temp);
        return head;

    }
};