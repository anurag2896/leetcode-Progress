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
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *behind=head, *ahead=head, *target;
        while(n--) {
            ahead=ahead->next;
        }
        
        if(!ahead)
            return head->next;
        
        while(ahead->next!=NULL) {
            ahead=ahead->next;
            behind=behind->next;
        }
        
        target=behind->next;
        behind->next=behind->next->next;
        
        delete target;
        return head;
    }
};
