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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        
        unordered_map<int,int> umap;
        
        ListNode* temp = head;
        while(temp!=NULL)
        {
            umap[temp->val]++;
            temp = temp->next;
        }
        
        temp = head;
        while(head!=NULL && umap[head->val]>1)
        {
            ListNode* temp2 = head;
            head = head->next;
            delete temp2;
        }
        
        temp = head;
        if(head==NULL)
            return head;
        
        while(temp!=NULL && temp->next!=NULL)
        {
            if(umap[temp->next->val]>1)
            {
                ListNode* temp2 = temp->next;
                while(temp2->next!=NULL && umap[temp2->val]>1)
                {
                    temp2 = temp2->next;
                }
                
                if(temp2->next==NULL && umap[temp2->val]>1)
                    temp->next = temp2->next;
                else
                    temp->next = temp2;
                
            }
            else
                temp = temp->next;
        }
        return head;
    }
};
