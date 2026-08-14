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
    bool hasCycle(ListNode *head) {
        // map<ListNode*, int >mpp;
        // ListNode*temp=head;
        // if(head==NULL||head->next==NULL)return false;
        // while(temp!=NULL){
        //     if(mpp.find(temp)!=mpp.end())return true;
        //     temp=temp->next;
        //     mpp[temp]=1;
        // }
        //     return false;



        ListNode* slow=head;
        ListNode*fast=head;
        while(fast!=nullptr&& fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast)return true;
        }
        return false;

    }
};