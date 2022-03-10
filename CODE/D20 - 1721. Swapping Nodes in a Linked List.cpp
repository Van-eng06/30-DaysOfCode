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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=NULL;
        
        for(int i=0;i<k;i++){
            prev=fast;
            fast=fast->next;
           
        }
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
       
        swap(prev->val,slow->val);
        return head;
        
    }
};
