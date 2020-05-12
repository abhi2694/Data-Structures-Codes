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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head==NULL ||head->next==NULL)
            return head;
        
        if(m>n)
        {
            int t = m;
            m = n;
            n = t;
        }
        
        if(m==n)
            return head;
        
        ListNode* temp = head;
        int x = 1;
        
        if(m==1)
        {
            ListNode* temp2 = new ListNode(0);
            temp2->next = head;
            temp = temp2;
             ListNode* p = temp->next;
        ListNode* c = p->next;
        ListNode* l = c->next;
        
        x = 0;
        while(l!=NULL && x<(n-m-1))
        {
            c->next = p;
            p = c;
            c = l;
            l = l->next;
            x++;
        }
        
        c->next = p;
        temp->next->next = l;
        temp->next = c;
            return c;
        }

        temp = head;
        
        
        
        while(temp!=NULL && x<(m-1))
        {
            temp = temp->next;
            x++;
        }
        
        if(temp==NULL)
            return head;
        ListNode* p = temp->next;
        ListNode* c = p->next;
        ListNode* l = c->next;
        
        x = 0;
        while(l!=NULL && x<(n-m-1))
        {
            c->next = p;
            p = c;
            c = l;
            l = l->next;
            x++;
        }
        
        c->next = p;
        temp->next->next = l;
        temp->next = c;
        
        return head;
    }
};
