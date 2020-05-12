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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        
        if(head1==NULL && head2==NULL)
            return head1;
        
        if(head1==NULL)
            return head2;
        
        if(head2==NULL)
            return head1;
        
        ListNode* nhead = NULL;
        ListNode* i = head1;
        ListNode* j = head2;
        ListNode* temp = NULL;
    
    if(head1->val <= head2->val)
    {
        nhead = head1;
        i = head1->next;
        temp = nhead;
    }
    
    else
    {
        nhead = head2;
        j = head2->next;
        temp = nhead;
    }
    
    while(i!=NULL && j!=NULL)
    {
        if(i->val <= j->val)
        {
            temp->next = i;
            temp = i;
            i = i->next;            
        }
        
        else
        {
            temp->next = j;
             temp = j;
            j = j->next;
        }
    }
    
    if(i!=NULL)
    {
        while(i!=NULL)
        {
            temp->next = i;
            temp = i;
            i = i->next; 
        }
    }
    
    if(j!=NULL)
    {
        while(j!=NULL)
        {
            temp->next = j;
            temp = j;
            j = j->next; 
        }
    }
    
    //temp->next = NULL;
    
    return nhead;
    }
};
