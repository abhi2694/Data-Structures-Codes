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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* head1 = head;
        ListNode* head2 = head->next;
        ListNode* t1 = head1;
        ListNode* t2 = head2;
        
        while(t2!=NULL && t2->next!=NULL)
        {
            t1->next = t2->next;
            t1 = t2->next;
            t2->next = t1->next;
            t2 = t1->next;
        }
        
        t1->next = head2;
        if(t2!=NULL)
            t2->next = NULL;
        return head1;
    }
};
