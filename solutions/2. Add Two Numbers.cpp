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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=l1, *h2=l2, *curr;
        ListNode *head = new ListNode(0);
        int carry=0, v1, v2, val, sum;
        bool first=true;
        curr=head;
        while(h1 || h2 || carry) {
            if(h1) {
                v1=h1->val;
                h1=h1->next;
            }
            else
                v1=0;
            
            if(h2) {
                v2=h2->val;
                h2=h2->next;
            }
            else
                v2=0;
            
            sum=v1+v2+carry;
            val=sum%10;
            carry=sum/10;
            
            curr->next = new ListNode(val);
            curr=curr->next;
        }
        
        return head->next;
            
    }
};
