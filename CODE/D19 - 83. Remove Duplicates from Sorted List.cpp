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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        ListNode* temp;
        if(head==NULL) return head;
        while(curr->next!=NULL)
        {
            if(curr->val==curr->next->val)
            {
                temp=curr->next->next;
                delete(curr->next);
                curr->next=temp;
            }
            else
                curr=curr->next;
        }
        return head;
        
    }
};
