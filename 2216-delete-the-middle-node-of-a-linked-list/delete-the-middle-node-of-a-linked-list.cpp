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
        
        ListNode *fastptr=head;
        ListNode *slowptr=head;
        ListNode *prev=slowptr;
        if(fastptr==NULL || fastptr->next==NULL){
            return NULL;
        }

        while(fastptr !=NULL && fastptr->next!=NULL){

            prev=slowptr;
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }
        prev->next=slowptr->next;
        delete slowptr;
        return head;

    }
};