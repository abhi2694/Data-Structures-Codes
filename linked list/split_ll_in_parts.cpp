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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> v;
        int n = 0;
        ListNode* temp = root;
        
        while(temp!=NULL)
        {
            temp = temp->next;
            n++;
        }
        
        temp = root;
        
        
        int a = 0;
        if(n>=k)
            a = (n%k);
        else
            a = n;
        
        int h = 0;
        
        while(h<k || temp!=NULL)
        {
            root = temp;
            int x = (n/k);
            if(a>0)
            {
                x++;
                a--;
            }
            
            while(temp!=NULL && x>1)
            {
                temp = temp->next;
                x--;
                if(temp==NULL)
                    break;
            }
            
            if(temp==NULL)
            {
                if(root==NULL)
                    v.push_back(root);
                else
                    v.push_back(NULL);
            }
            else
            {
              ListNode* temp2 = temp;
            temp = temp->next;
            temp2->next = NULL;
            v.push_back(root);  
            }     
            
            h++;
        }
        return v;
        
    }
};
