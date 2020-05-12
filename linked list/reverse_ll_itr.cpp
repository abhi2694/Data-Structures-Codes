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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* p = head;
        ListNode* c = head->next;
        ListNode* n = c->next;
        p->next = NULL;
        while(c->next!=NULL)
        {
            c->next = p;
            p = c;
            c = n;
            n = n->next;
        }
        c->next = p;
        return c;
    }
};
