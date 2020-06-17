// Following is the given TreeNode structure.
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
#include<bits/stdc++.h>
#include<queue>

void printLevelWise(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
queue<TreeNode<int>*> pnodes;
pnodes.push(root);
    
	while(!pnodes.empty())
    {
        TreeNode<int>* front = pnodes.front();
        pnodes.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++)
        {
            cout<<front->children[i]->data;
            if(i!=front->children.size()-1)
                cout<<",";
            pnodes.push(front->children[i]);
        }
        cout<<endl;
    }
}

