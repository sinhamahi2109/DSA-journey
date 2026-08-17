/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
        ListNode*travelA=headA;
        ListNode*travelB=headB;
        while(travelA!=travelB){
            if(travelA==NULL){
                travelA=headB;}
                else travelA=travelA->next;
            if(travelB==NULL)travelB=headA;
            else{
            travelB=travelB->next;}


        }
            return travelA;
      

    }
};