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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==NULL || head->next==NULL){
            return head;
        }

        ListNode* temp = head;
        int length = 0;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }
        k=k%length;

        for(int i=0;i<k;++i){

            ListNode *curr=head;

            while(curr->next->next !=nullptr){
                curr=curr->next;
            }

            ListNode *last = curr->next;
            last->next= head;
            curr->next = nullptr;
            head = last;
        }
        return head;

        
    }
};