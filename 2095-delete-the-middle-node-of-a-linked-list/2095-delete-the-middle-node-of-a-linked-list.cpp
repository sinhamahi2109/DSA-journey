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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL)return NULL;
        ListNode*temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int n=cnt/2;
        for(int i = 1; i < n; i++) {
            temp = temp->next;
        }
                ListNode* middle=temp->next;
                temp->next=temp->next->next;
                delete(middle);
             
            
        
        return head;
    }
};