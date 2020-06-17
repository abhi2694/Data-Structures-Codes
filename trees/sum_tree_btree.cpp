/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false

class combine
{
    public:
    bool a;
    int b;
    
    combine(){
        a = true;
        b = 0;
    }
};

combine helper(Node* root)
{
    if(root->left==NULL && root->right==NULL)
    {
        combine p;
        p.a = true;
        p.b = root->data;
        return p;
    }
    
    int sum = 0;
    
    
    combine temp1;
    if(root->left)
    temp1 = helper(root->left);
    combine temp2;
    if(root->right)
    temp2 = helper(root->right);
    
    sum+=temp1.b;
    sum+=temp2.b;
    combine res;
    
    if((sum==root->data) && temp1.a && temp2.a)
        res.a = true;
    else
        res.a = false;
    
    sum+=root->data;
    
    res.b = sum;
    return res;
}

bool isSumTree(Node* root)
{
     // Your code here
    combine res = helper(root);
    return res.a;
}