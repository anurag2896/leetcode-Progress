/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *reverse(ListNode *head) {
        if(!head || !head->next)
            return head;
        ListNode *rh=reverse(head->next);
        ListNode *rt=head->next;
        rt->next=head;
        head->next=NULL;
        
        return rh;
    }
    
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        ListNode *fast=head, *slow=head, *nh;
        while(fast->next && fast->next->next) {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        nh = reverse(slow->next);
        
        while(head && nh){
            cout<<head->val<<" "<<nh->val<<endl;
            if(head->val==nh->val) {
                head=head->next;
                nh=nh->next;
            } else
                return false;
            
        }
        
        return true;
    }
};
