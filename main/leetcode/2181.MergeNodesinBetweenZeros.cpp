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


    ListNode* mergeNodes(ListNode* head) {
        if(!head)return 0;
    ListNode* slow=head,*fast=head->next,*endnode=0;
    
    int sum=0;
    while(fast)
    {
if(fast->val!=0)
{
    sum+=fast->val;
 
}
else{
    slow->val=sum;
    endnode=slow;
    slow=slow->next;
    sum=0;
}
fast=fast->next;
    }
    ListNode* temp=slow;
    endnode->next=0;
    while(temp){
        ListNode* nxt=temp->next;
        delete temp;
        temp=nxt;
    }
    return head;
    }
};