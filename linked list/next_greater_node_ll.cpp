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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> output;
        
        ListNode* temp = head;
        while(temp!=NULL)
        {
            int a = temp->val;
            ListNode* temp2 = temp->next;
            while(temp2!=NULL)
            {
                if(temp2->val>a)
                {
                    output.push_back(temp2->val);
                    break;
                }
                temp2 = temp2->next;
            }
            if(temp2==NULL)
                output.push_back(0);
            temp = temp->next;
        }
        return output;
        
    }
};
