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
    ListNode *detectCycle(ListNode *head) {
        ListNode *S;
        ListNode *F;
        S=F=head;

        while(F !=NULL && F->next !=NULL){
            S=S->next;
            F=F->next->next;

            if(S==F){
                S=head;
                while(S !=F){
                    S=S->next;
                    F=F->next;
                }
                return S;
            }
        }
        return NULL;
        
    }
};