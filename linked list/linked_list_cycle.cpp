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
    bool hasCycle(ListNode *head) {
        unordered_map <ListNode*,bool> umap;
        
        ListNode* temp = head;
        while(temp!=NULL)
        {
            if(umap.count(temp)>0)
                return true;
            
            else
                umap[temp] = true;
            
            temp = temp->next;
        }
        
        return false;
    }
};
