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
BinaryTreeNode<int>* helper(int* input,int si,int ei){
    if(si>ei){
        return NULL;
    }
    int mid=(si+ei)/2;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(input[mid]);
    root->left=helper(input,si,mid-1);
    root->right=helper(input,mid+1,ei);
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    helper(input,0,n-1);
    

}