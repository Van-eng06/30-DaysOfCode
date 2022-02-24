class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* ans = head;
        ListNode* trv = head; 
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            trv->val = v[i]; 
            trv = trv->next;
        }
        return ans; 
    }
};
