// Following is the given Tree node structure.
/**************
 template <typename T>
 class TreeNode {
    public:
        T data;
        vector<TreeNode<T>*> children;
 
        TreeNode(T data) {
            this->data = data;
        }
 
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
 };
***************/

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root==NULL)
        return NULL;
    
    TreeNode<int>* maxi = root;
    
    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int>* a = maxDataNode(root->children[i]);
        if(a->data>maxi->data)
            maxi = a;
    }
    
    return maxi;

}

