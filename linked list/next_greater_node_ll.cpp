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
          vector<int> res;
        stack<int> s;
        for(auto node=head; node!=NULL; node=node->next) {
            while(s.size() && res[s.top()] < node->val) {
                res[s.top()] = node->val;
                s.pop();
            }
            s.push(res.size());
            res.push_back(node->val);
        }
        while(!s.empty()) {res[s.top()] = 0; s.pop(); }
        return res;
        
    }
};
