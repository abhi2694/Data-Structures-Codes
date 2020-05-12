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
    
   ListNode* rev(ListNode* head)
{
    //write your recursive code here
    if(head==NULL || head->next==NULL)
        return head;
    
    ListNode* temp = rev(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = rev(l1);
        l2 = rev(l2);
        int carry = 0;
        ListNode* temp = l1;
        ListNode* temp2 = l2;
        ListNode* temp3 = NULL;
        ListNode* head = NULL;
        
        while(temp!=NULL && temp2!=NULL)
        {
            int a = temp->val + temp2->val + carry;
            carry = 0;
            if(a>9)
            {
                carry = a/10;
                a%=10;
            }
            
            if(temp3==NULL)
            {
                temp3 = new ListNode(a);
                head = temp3;
            }
            else
            {
                ListNode* temp4 = new ListNode(a);
                temp3->next = temp4;
                temp3 = temp4;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        
        if(temp!=NULL)
        {
            while(temp!=NULL)
            {
                int a = temp->val + carry;
                carry = 0;
            if(a>9)
            {
                carry = 1;
                a%=10;
            }
            
            if(temp3==NULL)
            {
                temp3 = new ListNode(a);
                head = temp3;
            }
            else
            {
                ListNode* temp4 = new ListNode(a);
                temp3->next = temp4;
                temp3 = temp4;
            }
            temp = temp->next;
            }
        }
        
        if(temp2!=NULL)
        {
            while(temp2!=NULL)
            {
                int a = temp2->val + carry;
                carry = 0;
            if(a>9)
            {
                carry = 1;
                a%=10;
            }
            
            if(temp3==NULL)
            {
                temp3 = new ListNode(a);
                head = temp3;
            }
            else
            {
                ListNode* temp4 = new ListNode(a);
                temp3->next = temp4;
                temp3 = temp4;
            }
            temp2 = temp2->next;
            }
        }
        
        if(carry==1)
        {
            int a = carry;
            carry = 0;
            if(temp3==NULL)
            {
                temp3 = new ListNode(a);
                head = temp3;
            }
            else
            {
                ListNode* temp4 = new ListNode(a);
                temp3->next = temp4;
                temp3 = temp4;
            }
        }
        
        head = rev(head);
        return head;
    }
};
