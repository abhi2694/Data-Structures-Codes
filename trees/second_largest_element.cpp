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
#include<bits/stdc++.h>

class Pair{
    public:
    int maxi;
    int secmax;
};

Pair helper(TreeNode<int> *root){
    Pair p;
    p.maxi = root->data;
    p.secmax = 0;   
    
    for(int i=0;i<root->numChildren();i++)
    {
        Pair a = helper(root->getChild(i));
        Pair temp;
        temp.maxi = p.maxi;
        temp.secmax = p.secmax;
        
        if(temp.maxi>a.maxi)
        {
            p.maxi = temp.maxi;
            
            if(a.maxi>=temp.secmax)
                p.secmax = a.maxi;
            
            else
                p.secmax = temp.secmax;
        }
        else if(temp.maxi==a.maxi)
        {
            p.maxi = temp.maxi;
            if(temp.secmax>=a.secmax)
                p.secmax = temp.secmax;
            else
                p.secmax = a.secmax;
        }
        
        else
        {
            p.maxi = a.maxi;
            if(temp.maxi>=a.secmax)
                p.secmax = temp.maxi;
            else
                p.secmax = a.secmax;
        }
        if(p.maxi==p.secmax)
            p.secmax = 0;
    }
    //cout<<p.secmax<<endl;
    return p;
}

TreeNode <int>* secondLargest(TreeNode<int> *root) {
    // Write your code here
    if(root==NULL)
        return NULL;
    Pair p = helper(root);
    TreeNode <int>* maxn = root;
    
    if(p.secmax==0)
    {
        maxn = NULL;
        return maxn;
    }
    
    maxn->data = p.secmax;
    return maxn;
}

