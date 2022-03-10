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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        temp = head;
        if(n>count) return head;
        if(count == n){
          head = head->next;
            return head;
        } 
        int num = count - n -1;
        
        while(temp && num--){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
