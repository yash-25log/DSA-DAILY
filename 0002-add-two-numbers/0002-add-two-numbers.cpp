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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();//dummy node
        ListNode *temp = dummy;//temporary
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry){// iterate till either of them bbecome null or 0
            int sum = 0 ;
            if(l1 != NULL){
                sum += l1 -> val; //add to sum
                l1 = l1 -> next;
            }
            if(l2 != NULL){
                sum += l2 -> val;//add to sum
                l2 = l2 -> next;
            }
            
            sum += carry; //add carry
            carry = sum/10;
            ListNode* node = new ListNode(sum % 10);//summ linked list
            temp -> next = node;//link
            temp = temp ->next;//move
            
        }
        return dummy -> next;//head of linked list with sum
        
    }
};