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
        ListNode* curr=head;
        ListNode* l1=head;
        stack<int> s;
        while(curr!=NULL){
            s.push(curr->val);
            curr=curr->next;
        }
        while(!s.empty())
        {
            l1->val=s.top();
            s.pop();
            l1=l1->next;
        }
        return head;   
    }
};
