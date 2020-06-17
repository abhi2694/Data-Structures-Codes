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

BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
    if(postLength==0 || inLength==0)
        return NULL;
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(postorder[postLength-1]);
    
    int lins = 0;
    int i;
    for(i=0;i<inLength;i++)
    {
        if(inorder[i]==root->data)
            break;
    }
    int line = i-1;
    
    int lpos = 0;
    int lpoe = lpos + line - lins;
    root->left = getTreeFromPostorderAndInorder(postorder+lpos,lpoe-lpos+1,inorder+lins,line-lins+1);
    int rins = i+1;
    int rine = inLength-1;
    int rpoe = postLength-2;
    int rpos = rpoe-rine+rins;
    root->right = getTreeFromPostorderAndInorder(postorder+rpos,rpoe-rpos+1,inorder+rins,rine-rins+1);
    return root;
    
}
