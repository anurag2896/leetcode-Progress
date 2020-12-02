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
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        stack <int> s;
        int top;
        while(temp!=NULL) {
            s.push(temp->val);
            temp=temp->next;
        }
        
        temp=head;
        while(!s.empty() || temp!=NULL) {
            top=s.top();
            if(top!=temp->val)
                return false;
            else {
                temp=temp->next;
                s.pop();
            }
        }
        
        return true;
    }
};
