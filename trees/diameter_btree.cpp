/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

/* Computes the diameter of binary tree with given root.  */

int helper(Node* node, int &maxi)
{
    if(!node)
        return 0;
    
    int a = helper(node->left,maxi);
    int b = helper(node->right,maxi);
    
    if((a+b+1)>maxi)
        maxi = a + b + 1;
    
    return max(a,b)+1;
}

int diameter(Node* node) {
    // Your code here
    int maxi = 0;
    int x = helper(node,maxi);
    return maxi;
}