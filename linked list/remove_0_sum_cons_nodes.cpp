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
    ListNode* removeZeroSumSublists(ListNode* head) {
       ListNode* temp=new ListNode(0);
        temp->next=head;
        ListNode* temp2=temp;
        while(temp2!=NULL)
        {
            int sum=0;
            while(head!=NULL)
            {
                sum+=head->val;
                if(sum==0)
                {
                   temp2->next=head->next; 
                }
                head=head->next;
            }
            temp2=temp2->next;
            if(temp2!=NULL)
            {
                head=temp2->next;
            }
        }
        return temp->next; 
    }
};
