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
    
    ListNode* deleteNode(ListNode *head, int i) {
        
    if(head==NULL)
        return head;
    
    if(i==0)
    {
        ListNode* temp2 = head;
        head = head->next;
        delete temp2;
        return head;
    }
    
    ListNode* temp3 = deleteNode(head->next,i-1);
    head->next = temp3;    
        return head;
}
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            k++;
        }
        return deleteNode(head,k-n);
    }
};
