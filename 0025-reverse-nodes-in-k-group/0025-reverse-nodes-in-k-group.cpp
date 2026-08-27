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

 ListNode* reverseLL(ListNode* head){
    if(head==NULL||head->next==NULL)return head;
    ListNode*temp=head;
    ListNode* prevNode=NULL;
    while(temp!=NULL){
        ListNode* nextNode;
        nextNode=temp->next;
        temp->next=prevNode;
        prevNode=temp;
        temp=nextNode;
    }
    return prevNode;
 }

 ListNode* findKth(ListNode* head, int k){
    int count=0;
    ListNode* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    if(count<k)return NULL;
    temp=head;
    for(int i=1;i<k;i++){
        temp=temp->next;
    }
    return temp;

 }
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevLast=NULL;
        while(temp!=NULL){
        ListNode* kth=findKth(temp,k);
        if(kth==NULL){
            if(prevLast)prevLast->next=temp;
            break;
        }
        ListNode* nextNode=kth->next;
        kth->next=NULL;
        reverseLL(temp);
        if(temp==head){
            head=kth;
        }
        else{
        prevLast->next=kth;
        }
        prevLast=temp;
        temp=nextNode;

        }
        return head;
    }
};