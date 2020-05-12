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
    
    ListNode* midpoint_linkedlist(ListNode *head)
{
    // Write your code here
    ListNode *slow=head;
    ListNode *fast=head->next;
    if(head!=NULL){
        while(fast!=NULL && fast->next!=NULL){
            
            fast=fast->next->next;
            slow=slow->next;
        }
        
    }
    return slow;

}
ListNode* mergeTwoLLs(ListNode *head1, ListNode *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    ListNode *fh=NULL;
    ListNode *ft=NULL;
    if(head1->val<head2->val){
        fh=head1;
        ft=head1;
        head1=head1->next;
    }else{
        fh=head2;
        ft=head2;
        head2=head2->next;
    }
    while(head1!=NULL && head2!=NULL){
        if(head1->val<head2->val){
            ft->next=head1;
            head1=head1->next;
            ft=ft->next;
            
        }else{
            ft->next=head2;
            head2=head2->next;
            ft=ft->next;
        }
    }
    while(head1!=NULL){
        ft->next=head1;
        head1=head1->next;
        ft=ft->next;
    }
    while(head2!=NULL){
        ft->next=head2;
        head2=head2->next;
        ft=ft->next;
    }
    return fh;
}
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode *mid=midpoint_linkedlist(head);
    ListNode *half1=head;
    ListNode *half2=mid->next;
    mid->next=NULL;
    half1=sortList(half1);
    half2=sortList(half2);
    ListNode *final=mergeTwoLLs(half1,half2);
    return final;
    }
};
