// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/

vector<int>* findPath(BinaryTreeNode<int> *root , int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
	if(root==NULL)
    {
        vector<int>* v = new vector<int>();
        return v;
    }
    
    vector<int>* v = new vector<int>(); 
    
    if(root->data >k)
    {
       v = findPath(root->left,k);
    	if(v->size()!=0)
            v->push_back(root->data);
    }
    else if(root->data < k)
    {
        v = findPath(root->right,k);
        if(v->size()!=0)
            v->push_back(root->data);
    }
    else
    {
        v->push_back(root->data);
    }
    
    return v;
    
}
