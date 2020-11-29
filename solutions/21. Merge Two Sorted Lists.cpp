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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        
//         TRY ITERATIVE APPROACH
        
//         ListNode* head, *temp;
//         if(l1->val < l2->val)
//             head = l1;
//         else
//             head = l2;
        
//         while(l1->next!=NULL || l2->next!=NULL) {
//             if(l1->val < l2->val) {
//                 temp = l1->next;
//                 if(temp->val > l2->val) {
//                     l1->next = l2;
//                     l1=temp;
//                 } else 
//                     l1 = l1->next;
//             } else if(l1->val >= l2->val) {
//                 temp = l2->next;
//                 if(temp->val >= l1->val) {
//                     l2->next = l1;
//                     l2=temp;
//                 } else 
//                     l2 = l2->next;
//             } else if(l1->next = NULL) {
//                 l1->next = l2;
//             } else if(l2->next = NULL) {
//                 l2->next = l1;
//             }
//         }
        
        ListNode *head=NULL;
        if(l1->val<=l2->val){
            head=l1;
            l1->next=mergeTwoLists(l1->next, l2);
        } else {
            head=l2;
            l2->next=mergeTwoLists(l1, l2->next);
        }
        
        return head;
    }
};
