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
    ListNode *detectCycle(ListNode *head) {
        unordered_map <ListNode*, bool> umap;
        
        ListNode* temp = head;
        int k=0;
        while(temp!=NULL)
        {
            if(umap.count(temp)>0)
                return temp;
            else
                umap[temp] = true;
            
            k++;
            temp = temp->next;
        }
        
        return NULL;
    }
};
