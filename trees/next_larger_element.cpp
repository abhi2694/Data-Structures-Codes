// Following is the given Tree node structure
/**************

class TreeNode {
	TreeNode<T>** children;
	int childCount;

	public:
	T data;

	TreeNode(T data);	// Constructor
	int numChildren();
	void addChild(TreeNode<T>* child);
	TreeNode<T>* getChild(int index);
	void setChild(int index, TreeNode<T>* child);
};

***************/

TreeNode<int>* nextLargerElement(TreeNode<int> *root, int n) {
    // Write your code here
	if(root==NULL)
        return NULL;
    
    TreeNode<int>* maxi = NULL;
    if(root->data>n)
		maxi = root;
    
    for(int i=0;i<root->numChildren();i++)
    {
        TreeNode<int>* temp = nextLargerElement(root->getChild(i),n);
        if(temp!=NULL)
        {
            if(maxi==NULL)
                maxi = temp;
            else
            {
                if(maxi->data > temp->data)
                    maxi = temp;
            }
        }
    }
    
    return maxi;
}

