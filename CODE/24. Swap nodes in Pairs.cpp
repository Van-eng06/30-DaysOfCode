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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head-> next == NULL) // checking if the list is an empty list
            return head;
        
        ListNode* temp = head;   // taking a temporary list so that we do not loose reference
        
        while(temp)       
        {
            if(temp->next != NULL)    // to reach to the end of list   
            {
                swap(temp->val, temp->next->val);  // swapping the values 
                temp = temp->next->next;      // to skip 2 nodes together as we are swapping adjacent nodes          
            }
				else   
					break; // if we reach to null node, means we reached the end of list
        }  
        return head; 
    }
};
