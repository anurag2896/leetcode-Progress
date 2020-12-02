/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA=0, countB=0, diff;
        ListNode *tempA=headA, *tempB=headB;
        
        while(tempA!=NULL) {
            countA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL) {
            countB++;
            tempB=tempB->next;
        }
        
        tempA=headA, tempB=headB;
        if(countA>countB) {
            diff=countA-countB;
            while(diff--) {
                tempA=tempA->next;
            }
        }
        if(countB>countA) {
            diff=countB-countA;
            while(diff--) {
                tempB=tempB->next;
            }
        }
        
        while(tempA!=tempB) {
            tempA=tempA->next;
            tempB=tempB->next;
        }
        
        return tempA;
    }
};
