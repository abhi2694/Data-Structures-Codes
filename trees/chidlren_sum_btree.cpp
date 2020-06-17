bool isSumProperty(Node* root){
    if(root==NULL)
        return true;

    int sum = 0;

    if(root->left)
        sum+=root->left->data;
    if(root->right)
        sum+=root->right->data;

    return (sum==root->data) && (isSumProperty(root->left)) && (isSumProperty(root->right));
}