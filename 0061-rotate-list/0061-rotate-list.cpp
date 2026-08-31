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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==0||head->next==0||k==0)return head;
        ListNode* tail=head;
        int len=1;
        while(tail->next!=NULL){
            len++;
            tail=tail->next;
        }
        k=k%len;
        int cnt=len-k;
        ListNode* newTail=head;

        for(int i=1;i<cnt;i++){
            newTail=newTail->next;
        }
        tail->next=head;
        head=newTail->next;
        newTail->next=NULL;
        return head;
    
    }
};