/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode *l1 = head1;
        ListNode *l2 = head2;
        int c1=1;
        int c2=1;
        while(l1->next!=NULL){
            l1=l1->next;
            c1++;
        }        
        while(l2->next!=NULL){
            l2=l2->next;
            c2++;
        }
        ListNode *temp1=head1;
        ListNode *temp2=head2;
        if(c1-c2>0){
            int d=c1-c2;
            while(d>0){
                temp1=temp1->next;
                d--;
            }
        }
        else{
            int d=c2-c1;
            while(d>0){
                temp2=temp2->next;
                d--;
            }
        }
        while(temp1!=NULL&&temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }   
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};