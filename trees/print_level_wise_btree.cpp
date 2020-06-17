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

void printLevelWise(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
	queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int>* front = q.front();
        q.pop();
        
        cout<<front->data<<":L:";
        
        if(front->left!=NULL)
        {
            q.push(front->left);
            cout<<front->left->data<<",R:";
        }
        else
        {
         	cout<<"-1"<<",R:";   
        }
        
        if(front->right!=NULL)
        {
            q.push(front->right);
            cout<<front->right->data<<endl;
        }
        else
            cout<<"-1"<<endl;
        
    }
}
