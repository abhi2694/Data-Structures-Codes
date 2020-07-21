/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// root: root node of the tree

void helper(Node* root,map<int,vector<int>> &m, int index)
{
    if(!root)
        return ;
        
    m[index].push_back(root->data);
    
    helper(root->left,m,index-1);
    helper(root->right,m,index+1);
}

vector<int> verticalOrder(Node *root)
{
    //Your code here
    vector<int> v;
    if(!root)
        return v;
        
    map<int, vector<int>> m;
    helper(root,m,0);
    
    for(auto i:m)
    {
        for(int j=0;j<i.second.size();j++)
            v.push_back(i.second[j]);
    }
    
    return v;
}
