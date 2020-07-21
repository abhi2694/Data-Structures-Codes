
bool checkIfSame(struct Node* root1, struct Node* root2)
{
    if(!root1 && !root2)
        return true;
    if(!root1 || !root2)
        return false;
        
    return (root1->data == root2->data) && checkIfSame(root1->left,root2->right) && checkIfSame(root1->right,root2->left);
}

bool isSymmetric(struct Node* root)
{
	// Code here
	return checkIfSame(root,root);
}