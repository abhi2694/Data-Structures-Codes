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
BinaryTreeNode<int>* buildtree(int *preorder, int *inorder,int pres,int pree,int ins,int ine)
{
    if (pres>pree||ins>ine) return NULL;
    int value=preorder[pres];
    int k=0;
    for (int i=ins;i<=ine;i++)
    {
        if (value==inorder[i]) {k=i;break;}
    }
    BinaryTreeNode<int>* root= new BinaryTreeNode<int>(value);
    root->left= buildtree(preorder,inorder,pres+1, pres+(k-ins), ins,k-1);
    root->right= buildtree(preorder,inorder,  pres+(k-ins)+1,pree,k+1,ine);
    return root;
}


BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
    // Write your code here
    
     int pres=0;
    int pree=preLenght-1;
    int ins=0;
    int ine=inLength-1;
    
    return buildtree(preorder,inorder,pres,pree,ins,ine);
    
}
