/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        int n = G.size();
        unordered_map<int, bool> umap;
        
       for(int i=0;i<n;i++)
            umap[G[i]] = true;
        
        ListNode* temp = head;
        bool flag = true;
        
        while(temp)
        {
            if(umap.count(temp->val))
            {
                if(!flag)
                {
                    n--;
                }
                
                flag = false;
            }
            else
            {
              flag = true;
            }
            temp = temp->next;
        }
        
        return n;
    }
};