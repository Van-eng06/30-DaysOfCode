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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr=head;
        ListNode* l1=head;
        stack<int> s;
        for(int i=1;i<left;i++){
            curr=curr->next;
            l1=l1->next;
        }
        while(left<=right){
            s.push(curr->val);
            curr=curr->next;
            left++;
        }
        while(!s.empty()){
            l1->val=s.top();
            s.pop();
            l1=l1->next;
        }
        return head;
        
    }
};
