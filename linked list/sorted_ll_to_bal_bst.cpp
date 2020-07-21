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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    
    TreeNode* convertToBST(int start, int end, ListNode** head) {
        if (start >= end) return nullptr;
        int mid = (start + end) / 2;
        TreeNode* left = convertToBST(start, mid, head);
        TreeNode* node = new TreeNode((*head)->val);
        node->left = left;
        *head = (*head)->next;
        TreeNode* right = convertToBST(mid+1, end, head);
        node->right = right;
        return node;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        while (temp) {
           temp = temp->next;
            size++;
        }
        
        return convertToBST(0, size, &head);
	}
};