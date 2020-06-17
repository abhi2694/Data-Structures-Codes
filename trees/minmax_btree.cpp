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
 
 // PairAns class -
 class PairAns {
    public :
        int min;
        int max;
 };
 
***************/
#include<bits/stdc++.h>

PairAns minMax(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
	if(root==NULL)
    {
        PairAns p;
        p.min = INT_MAX;
        p.max = INT_MIN;
        return p;
    }
    
    PairAns p;
    p.min = root->data;
    p.max = root->data;
    
    PairAns temp = minMax(root->left);
    if(temp.min < p.min)
        p.min = temp.min;
    if(temp.max > p.max)
        p.max = temp.max;
    
    temp = minMax(root->right);
    if(temp.min < p.min)
        p.min = temp.min;
    if(temp.max > p.max)
        p.max = temp.max;
    
    return p;
}
