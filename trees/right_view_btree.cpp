/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// A wrapper over leftViewUtil()
void helper(Node* root, int height, int &level)
{
    if(!root)
        return ;
        
    if(height>level)
    {
        cout<<root->data<<" ";
        level = height;
    }
        
   
        
    helper(root->right,height+1,level);

    helper(root->left,height+1,level);
    
}

void rightView(Node *root)
{
   // Your Code here
   int level = -1;
   
   helper(root,0,level);
}


