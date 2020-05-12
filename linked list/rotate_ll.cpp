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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return head;
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            n++;
        }
        if(k>=n)
            k%=n;
        
        if(k==0)
            return head;
        
        int x = 1;
        temp = head;
        while(temp!=NULL && x<(n-k))
        {
            temp = temp->next;
            x++;
        }
        
        if(temp==NULL)
            return head;
            
        ListNode* t2 = temp->next;
        ListNode* t3 = t2;
        while(t3->next!=NULL)
        {
            t3 = t3->next;
        }
        t3->next = head;
        head = t2;
        temp->next = NULL;
        return head;
        
    }
};
