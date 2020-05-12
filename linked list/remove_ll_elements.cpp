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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL)
            return head;
        
        if(head->next==NULL)
        {
            if(head->val== val)
                return NULL;
            else
                return head;
        }
        
        ListNode* temp = head;
        while(temp!=NULL && temp->val == val)
        {
            ListNode* temp2 = temp;
            temp = temp->next;
            delete temp2;
            head = temp;
        }
        
        if(temp==NULL)
            return NULL;
        
        while(temp->next!=NULL)
        {
            if(temp->next->val == val)
            {
                ListNode* temp2 = temp->next;
                temp->next = temp->next->next;
                delete temp2;
            }
            else
                temp = temp->next;
        }
        
        return head;
    }
};
