
void helper(Node* root, map<int,int> &m, int index)
{
    if(!root)
        return ;
        
    m[index] = root->data;
    
    helper(root->left,m,index-1);
    helper(root->right,m,index+1);
}

vector <int> bottomView(Node *root)
{
   // Your Code Here
   map<int,int> m;
   helper(root,m,0);
   
   vector<int> v;
   for(auto i: m)
   {
    v.push_back(i.second);
   }
   
   
   return v;
}