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

void helper(TreeNode<int>* root,int index)
{
    root->data = index;
    
    for(int i=0;i<root->numChildren();i++)
        helper(root->getChild(i),index+1);
}

void replaceWithDepthValue(TreeNode<int> *root){    
	// Write your code here
	helper(root,0);
}

