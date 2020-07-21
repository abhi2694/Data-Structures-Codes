
bool helper(Node* root, int mini, int maxi)
{
    if(!root)
        return true;
        
    if(root->data>maxi || root->data<mini)
        return false;
    
    return helper(root->left,mini,root->data-1) && helper(root->right,root->data+1,maxi);
    
}

bool isBST(Node* root) {
    // Your code here
    if(!root)
    return true;
    return helper(root,INT_MIN, INT_MAX);
}
