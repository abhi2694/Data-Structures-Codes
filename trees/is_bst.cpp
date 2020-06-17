#include <climits>
bool isBST2(BinaryTreeNode<int> *root,int min=INT_MIN,int max=INT_MAX ){
    if(root==NULL){
        return true;
    }
    if(root->data<min || root->data>max){
        return false;
    }
    bool isleft=isBST2(root->left,min,root->data-1);
    bool isright=isBST2(root->right,root->data,max);
    return isleft && isright;
}
bool isBST(BinaryTreeNode<int> *root){
       /* Don't write main().
	* Don't read input, it is passed as function argument.
	* Return output and don't print it.
	* Taking input and printing output is handled automatically.
	*/
    return isBST2(root);

}