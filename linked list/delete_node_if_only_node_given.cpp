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
    void deleteNode(ListNode* node) {
        ListNode* temp = node;
            while(temp->next->next!=NULL)
            {
                temp->val = temp->next->val;
                temp = temp->next;
            }
            temp->val = temp->next->val;
            ListNode* temp2 = temp->next;
            delete temp2;
            temp->next = NULL;
        
    }
};
