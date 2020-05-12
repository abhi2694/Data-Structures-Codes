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
    
    ListNode* helper(ListNode* head,int k,int n)
    {
    if(head==NULL)
      return head;
        
    if(k>n)
        return head;
        
  ListNode *curr=head;
  ListNode *prev=NULL;
  ListNode *Next=NULL;
  int count=0;
  while(curr!=NULL && count < k){
      Next=curr->next;
      curr->next=prev;
      prev=curr;
      curr=Next;
      count++;
  }

  if(Next!=NULL){
     head->next=helper(Next,k,n-k);
  }

  return prev; 
}

    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
            n++;
        }
        
        return helper(head,k,n);
    }
};
