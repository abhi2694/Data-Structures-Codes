// Following is the Binary Tree node structure
/**************
 
 template <typename T>
 class Node{
    public:
    T data;
    Node<T> *next;
    
    Node(T data){
        this -> data = data;
        this -> next = NULL;
    }
 };
 
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

class Pair
{
    public:
   Node<int>* first;
   Node<int>* second;
};

Pair helper(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        Pair p;
        p.first = NULL;
        p.second = NULL;
        return p;
    }
    
    Node<int>* temp = new Node<int>(root->data);
    temp->next = NULL;
    Pair a,b,c;
    a = helper(root->left);
    b = helper(root->right);
    if(a.first!=NULL)
    a.second->next = temp;
    
    temp->next = b.first;
    if(a.first!=NULL)
    c.first = a.first;
    else
        c.first = temp;
    if(b.second!=NULL)
    c.second = b.second;
    else
        c.second = temp;
    return c;
    
}

Node<int>* constructBST(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    Pair a;
    a = helper(root);
    return a.first;
}